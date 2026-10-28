// rea decompile_all
// name: System.Reflection.ExceptionHandlingClause$$ToString
// address: 0x74ec410
// body: available
// range: 0x74ec410-0x74ec6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74ec6dc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ec6e8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74ec6ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Reflection_ExceptionHandlingClause__ToString(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_095215eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091842d8);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_092264d0);
    FUN_03f5c2a4(&DAT_09202bf0);
    FUN_03f5c2a4(&DAT_092264e0);
    DAT_095215eb = 1;
  }
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,5);
  local_34 = *(undefined4 *)(param_1 + 0x1c);
  lVar2 = FUN_03f5c42c(DAT_091842d8,&local_34);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
LAB_074ec6e0:
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] != 0) {
    plVar1[4] = lVar2;
    thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
    local_38 = *(undefined4 *)(param_1 + 0x20);
    lVar2 = FUN_03f5c42c(DAT_09535420,&local_38);
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
    goto LAB_074ec6e0;
    if ((*(uint *)(plVar1 + 3) & 0xfffffffe) != 0) {
      plVar1[5] = lVar2;
      thunk_FUN_03f5d7b8(plVar1 + 5,lVar2);
      local_3c = *(undefined4 *)(param_1 + 0x24);
      lVar2 = FUN_03f5c42c(DAT_09535420,&local_3c);
      if ((lVar2 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
      goto LAB_074ec6e0;
      if (2 < *(uint *)(plVar1 + 3)) {
        plVar1[6] = lVar2;
        thunk_FUN_03f5d7b8(plVar1 + 6,lVar2);
        local_40 = *(undefined4 *)(param_1 + 0x28);
        lVar2 = FUN_03f5c42c(DAT_09535420,&local_40);
        if ((lVar2 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_074ec6e0;
        if ((*(uint *)(plVar1 + 3) & 0xfffffffc) != 0) {
          plVar1[7] = lVar2;
          thunk_FUN_03f5d7b8(plVar1 + 7,lVar2);
          local_44 = *(undefined4 *)(param_1 + 0x2c);
          lVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
          if ((lVar2 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_074ec6e0;
          if (4 < *(uint *)(plVar1 + 3)) {
            plVar1[8] = lVar2;
            thunk_FUN_03f5d7b8(plVar1 + 8,lVar2);
            uVar4 = System_String__Format(DAT_09202bf0,plVar1,0);
            uVar6 = *(undefined8 *)(param_1 + 0x10);
            if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
              FUN_03f5c424(DAT_095354b8);
            }
            uVar5 = System_Type__op_Inequality(uVar6,0,0);
            if ((uVar5 & 1) != 0) {
              uVar4 = System_String__Format(DAT_092264d0,uVar4,*(undefined8 *)(param_1 + 0x10),0);
            }
            if (*(int *)(param_1 + 0x1c) == 1) {
              local_34 = *(undefined4 *)(param_1 + 0x18);
              uVar6 = FUN_03f5c42c(DAT_09535420,&local_34);
              uVar4 = System_String__Format(DAT_092264e0,uVar4,uVar6,0);
            }
            return uVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

