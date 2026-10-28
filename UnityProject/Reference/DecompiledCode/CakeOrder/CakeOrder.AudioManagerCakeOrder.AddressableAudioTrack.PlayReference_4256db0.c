// rea decompile_all
// name: CakeOrder.AudioManagerCakeOrder.AddressableAudioTrack$$PlayReference
// address: 0x4256db0
// body: available
// range: 0x4256db0-0x4256fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4256ff8 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4256ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_AudioManagerCakeOrder_AddressableAudioTrack__PlayReference
               (undefined4 param_1,long param_2,long *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09516f34 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091743d0);
    FUN_03f5c2a4(&DAT_091bf618);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_091976e8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091f2880);
    FUN_03f5c2a4(&DAT_09196378);
    FUN_03f5c2a4(&DAT_09213b10);
    DAT_09516f34 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09196378);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((long *)(lVar3 + 0x10),param_2);
    *(undefined4 *)(lVar3 + 0x1c) = param_1;
    *(undefined4 *)(lVar3 + 0x20) = param_4;
    if (param_3 != (long *)0x0) {
      uVar4 = (**(code **)(*param_3 + 0x248))(param_3,*(undefined8 *)(*param_3 + 0x250));
      if ((uVar4 & 1) != 0) {
        lVar5 = (**(code **)(*param_3 + 0x198))(param_3,*(undefined8 *)(*param_3 + 0x1a0));
        plVar8 = (long *)(param_2 + 0x40);
        plVar7 = (long *)*plVar8;
        if ((plVar7 == (long *)0x0) ||
           (uVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,lVar5,*(undefined8 *)(*plVar7 + 0x140)),
           (uVar4 & 1) == 0)) {
          cVar2 = *(char *)(param_2 + 0x60);
          iVar1 = *(int *)(param_2 + 100) + 1;
          *(int *)(param_2 + 100) = iVar1;
          *(int *)(lVar3 + 0x18) = iVar1;
          if (cVar2 != '\0') {
            *(undefined8 *)(param_2 + 0x48) = 0;
            *(undefined8 *)(param_2 + 0x50) = 0;
            *(undefined1 *)(param_2 + 0x60) = 0;
            *(undefined8 *)(param_2 + 0x58) = 0;
          }
          *plVar8 = lVar5;
          thunk_FUN_03f5d7b8(plVar8,lVar5);
          if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04b711d8(&local_58,param_3,DAT_091bf618);
          *(undefined8 *)(param_2 + 0x50) = uStack_50;
          *(undefined8 *)(param_2 + 0x48) = local_58;
          *(undefined8 *)(param_2 + 0x58) = local_48;
          thunk_FUN_03f5d7b8(param_2 + 0x48,0);
          *(undefined1 *)(param_2 + 0x60) = 1;
          uVar6 = thunk_FUN_03f9944c(DAT_091743d0);
          FUN_070a1450(uVar6,lVar3,DAT_091f2880,0);
          FUN_0640ebfc(param_2 + 0x48,uVar6,DAT_091976e8);
        }
        return;
      }
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09213b10,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

