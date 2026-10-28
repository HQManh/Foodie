// rea decompile_all
// name: CakeOrder.BaseUI.InternetGate$$Check
// address: 0x42d058c
// body: available
// range: 0x42d058c-0x42d070f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d06c0 to 0x457ad58 EssentialSystemR1.NetworkCheck$$RequestCheckConnection (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42d070c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_InternetGate__Check(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_0951739a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174ba8);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091ebe38);
    FUN_03f5c2a4(&DAT_09191e78);
    DAT_0951739a = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09191e78);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 0x10);
    *plVar8 = param_1;
    thunk_FUN_03f5d7b8(plVar8,param_1);
    if (*plVar8 == 0) {
      return;
    }
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = UnityEngine_Application__get_internetReachability(0);
    if (iVar1 == 0) {
      lVar2 = *plVar8;
      if (lVar2 != 0) {
        uVar4 = *(undefined8 *)(lVar2 + 0x40);
        uVar6 = *(undefined8 *)(lVar2 + 0x28);
        uVar5 = 0;
LAB_042d06fc:
                    /* WARNING: Could not recover jumptable at 0x042d0708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar2 + 0x18))(uVar4,uVar5,uVar6);
        return;
      }
    }
    else {
      uVar3 = EssentialSystemR1_NetworkCheck__get_IsExistInstance(0);
      if ((uVar3 & 1) == 0) {
        lVar2 = *plVar8;
        if (lVar2 != 0) {
          uVar4 = *(undefined8 *)(lVar2 + 0x40);
          uVar6 = *(undefined8 *)(lVar2 + 0x28);
          uVar5 = 1;
          goto LAB_042d06fc;
        }
      }
      else {
        if (DAT_095173ff == '\0') {
          FUN_03f5c2a4(&DAT_091886f0);
          DAT_095173ff = '\x01';
        }
        lVar7 = **(long **)(DAT_091886f0 + 0xb8);
        uVar4 = thunk_FUN_03f9944c(DAT_09174ba8);
        FUN_070a7634(uVar4,lVar2,DAT_091ebe38,0);
        if (lVar7 != 0) {
          EssentialSystemR1_NetworkCheck__RequestCheckConnection(lVar7,uVar4,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

