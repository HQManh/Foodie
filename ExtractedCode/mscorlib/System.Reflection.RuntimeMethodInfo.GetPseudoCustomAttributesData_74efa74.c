// rea decompile_all
// name: System.Reflection.RuntimeMethodInfo$$GetPseudoCustomAttributesData
// address: 0x74efa74
// body: available
// range: 0x74efa74-0x74efc47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74efc34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74efc38 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74efc44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Reflection_RuntimeMethodInfo__GetPseudoCustomAttributesData(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if ((DAT_09521619 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fdb0);
    FUN_03f5c2a4(&DAT_09183040);
    FUN_03f5c2a4(&DAT_091727e0);
    DAT_09521619 = 1;
  }
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  FUN_03f66a68(*(undefined8 *)(param_1 + 0x10),&local_50);
  uVar2 = (uint)local_40;
  uVar7 = local_40._4_4_ >> 7 & 1;
  uVar1 = local_40 & 0x8000000000;
  if (((uint)local_40 >> 0xd & 1) == 0) {
    if ((local_40 & 0x8000000000) == 0) {
      return (long *)0x0;
    }
    plVar3 = (long *)FUN_03f5c394(DAT_0917fdb0,uVar7);
LAB_074efb34:
    uVar5 = DAT_091727e0;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = System_Type__GetTypeFromHandle(uVar5,0);
    if (lVar4 == 0) {
LAB_074efc34:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = System_Type__GetConstructor
                      (lVar4,*(undefined8 *)(*(long *)(DAT_095354b8 + 0xb8) + 0x10),0);
    lVar4 = thunk_FUN_03f9944c(DAT_09183040);
    System_Reflection_CustomAttributeData___ctor(lVar4,uVar5);
    if (plVar3 == (long *)0x0) goto LAB_074efc34;
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 == 0))
    goto LAB_074efc3c;
    if ((int)plVar3[3] == 0) goto LAB_074efc38;
    plVar3[4] = lVar4;
    thunk_FUN_03f5d7b8(plVar3 + 4,lVar4);
    if ((uVar2 >> 0xd & 1) == 0) {
      return plVar3;
    }
    lVar4 = System_Reflection_RuntimeMethodInfo__GetDllImportAttributeData(param_1);
    uVar7 = 1;
  }
  else {
    plVar3 = (long *)FUN_03f5c394(DAT_0917fdb0,uVar7 + 1);
    if (uVar1 != 0) goto LAB_074efb34;
    lVar4 = System_Reflection_RuntimeMethodInfo__GetDllImportAttributeData(param_1);
    if (plVar3 == (long *)0x0) goto LAB_074efc34;
    uVar7 = 0;
  }
  if ((lVar4 == 0) ||
     (lVar6 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar6 != 0)) {
    if (uVar7 < *(uint *)(plVar3 + 3)) {
      plVar3[(ulong)uVar7 + 4] = lVar4;
      thunk_FUN_03f5d7b8(plVar3 + (ulong)uVar7 + 4,lVar4);
      return plVar3;
    }
LAB_074efc38:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_074efc3c:
  uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,0);
}

