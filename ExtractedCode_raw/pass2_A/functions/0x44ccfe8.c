// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerAssets$$Prefab
// address: 0x44ccfe8
// body: available
// range: 0x44ccfe8-0x44cd1a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cd1a0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd1a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookOrder_Cooking_Implement_CookingCustomerAssets__Prefab(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((DAT_095182bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_0919ef68);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095182bb = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(char *)(param_1 + 0x19) == '\0') {
    if ((param_2 != 0) && (plVar2 = *(long **)(param_2 + 0x18), plVar2 != (long *)0x0)) {
      lVar6 = *(long *)(param_1 + 0x10);
      uVar3 = (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_06f6d800(lVar6,uVar3,&local_38,DAT_0919ef68);
      if ((((uVar4 & 1) != 0) && (uVar4 = FUN_0640f598(&local_38,DAT_091977b8), (uVar4 & 1) != 0))
         && (iVar1 = FUN_0640f818(&local_38,DAT_09197808), iVar1 == 1)) {
        uVar3 = FUN_0640f7ac(&local_38,DAT_09197800);
        return uVar3;
      }
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar4 & 1) != 0) {
      return *(undefined8 *)(param_1 + 0x20);
    }
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar5 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_091ffa70);
    System_InvalidOperationException___ctor(uVar5,uVar3,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar5 = thunk_FUN_03f9944c();
    uVar3 = thunk_FUN_03fc39d4(&DAT_091ff1f0);
    System_ObjectDisposedException___ctor(uVar5,uVar3,0);
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c63a0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar3);
}

