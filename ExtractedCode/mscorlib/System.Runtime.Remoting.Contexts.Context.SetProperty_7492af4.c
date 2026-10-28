// rea decompile_all
// name: System.Runtime.Remoting.Contexts.Context$$SetProperty
// address: 0x7492af4
// body: available
// range: 0x7492af4-0x7492ca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7492c04 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7492c24 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7492c28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7492ca4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_Contexts_Context__SetProperty(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09521315 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b00);
    FUN_03f5c2a4(&DAT_091ad110);
    FUN_03f5c2a4(&DAT_091ad108);
    FUN_03f5c2a4(&DAT_0917c2d0);
    DAT_09521315 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092043a8);
    System_ArgumentNullException___ctor(uVar4,uVar5,0);
LAB_07492c90:
    uVar5 = thunk_FUN_03fc39d4(&DAT_091c5fc0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar5);
  }
  if (*(int *)(DAT_09182b00 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = System_AppDomain__InternalGetDefaultContext(0);
  if (lVar3 == param_1) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fd5d0);
    System_InvalidOperationException___ctor(uVar4,uVar5,0);
    goto LAB_07492c90;
  }
  plVar7 = (long *)(param_1 + 0x38);
  lVar3 = *plVar7;
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_0917c2d0);
    FUN_057e0400(lVar3,DAT_091ad108);
    *plVar7 = lVar3;
    thunk_FUN_03f5d7b8(plVar7,lVar3);
    lVar3 = *plVar7;
    if (lVar3 == 0) goto LAB_07492c28;
  }
  lVar2 = DAT_091ad110;
  lVar6 = *(long *)(lVar3 + 0x10);
  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
      *plVar7 = param_2;
      thunk_FUN_03f5d7b8(plVar7,param_2);
      return;
    }
    FUN_057e0c68(lVar3,param_2,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
    return;
  }
LAB_07492c28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

