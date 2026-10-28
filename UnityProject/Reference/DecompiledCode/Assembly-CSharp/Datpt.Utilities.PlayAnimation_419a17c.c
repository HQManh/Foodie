// rea decompile_all
// name: Datpt.Utilities$$PlayAnimation
// address: 0x419a17c
// body: available
// range: 0x419a17c-0x419a3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x419a328 to 0x85f70f4 UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x419a3b4 to 0x41991d4 Datpt.Utilities$$DelayedCallScaled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x419a3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Utilities__PlayAnimation
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,byte param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((DAT_095167fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091f2180);
    FUN_03f5c2a4(&DAT_09195cc0);
    FUN_03f5c2a4(&DAT_0918c980);
    FUN_03f5c2a4(&DAT_091fbb50);
    DAT_095167fe = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195cc0);
  Datpt_Utilities_<>c__DisplayClass43_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar5 = (long *)(lVar1 + 0x10);
    *plVar5 = param_4;
    thunk_FUN_03f5d7b8(plVar5,param_4);
    puVar6 = (undefined8 *)(lVar1 + 0x18);
    *puVar6 = param_5;
    thunk_FUN_03f5d7b8(puVar6,param_5);
    *(undefined8 *)(lVar1 + 0x30) = param_7;
    *(byte *)(lVar1 + 0x20) = param_6 & 1;
    *(undefined4 *)(lVar1 + 0x24) = param_3;
    *(undefined4 *)(lVar1 + 0x28) = param_1;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),param_7);
    lVar4 = *plVar5;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar4,0,0);
    if (((uVar2 & 1) != 0) || (uVar2 = System_String__IsNullOrEmpty(*puVar6,0), (uVar2 & 1) != 0)) {
LAB_0419a2e4:
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_091fbb50,0);
      return;
    }
    if (*plVar5 != 0) {
      uVar3 = UnityEngine_Animation__GetState(*plVar5,*puVar6,0);
      uVar2 = UnityEngine_TrackedReference__op_Equality(uVar3,0,0);
      if ((uVar2 & 1) != 0) goto LAB_0419a2e4;
      if ((*plVar5 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(*plVar5,0), lVar4 != 0))
      {
        UnityEngine_GameObject__SetActive(lVar4,1,0);
        uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091f2180,0);
        if (*(int *)(DAT_0918c980 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        Datpt_Utilities__DelayedCallScaled(param_2,uVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

