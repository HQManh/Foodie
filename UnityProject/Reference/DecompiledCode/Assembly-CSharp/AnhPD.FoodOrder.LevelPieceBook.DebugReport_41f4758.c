// rea decompile_all
// name: AnhPD.FoodOrder.LevelPieceBook$$DebugReport
// address: 0x41f4758
// body: available
// range: 0x41f4758-0x41f4baf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f4b68 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4b6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4b70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4b74 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4b78 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4b84 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4b90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4b9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4ba8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f4bac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_LevelPieceBook__DebugReport(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  long local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516b8e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9b0);
    FUN_03f5c2a4(&DAT_091a6750);
    FUN_03f5c2a4(&DAT_091a6758);
    FUN_03f5c2a4(&DAT_091a6760);
    FUN_03f5c2a4(&DAT_091a9818);
    FUN_03f5c2a4(&DAT_091a9820);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0921e6d0);
    FUN_03f5c2a4(&DAT_0921ba60);
    FUN_03f5c2a4(&DAT_09226450);
    FUN_03f5c2a4(&DAT_09226448);
    DAT_09516b8e = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar3,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x20);
  local_b0 = *(undefined8 *)(param_1 + 0x18);
  local_a0 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = FUN_03f5c42c(DAT_09189158,&local_b0);
  uVar4 = System_String__Format(DAT_0921e6d0,uVar4,0);
  if (plVar3 != (long *)0x0) {
    System_Text_StringBuilder__AppendLine(plVar3,uVar4,0);
    System_Text_StringBuilder__AppendLine(plVar3,DAT_0921ba60,0);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_06fca844(&local_d8,*(long *)(param_1 + 0x30),DAT_0919f9b0);
      uStack_88 = puStack_d0;
      local_90 = local_d8;
      uStack_78 = uStack_c0;
      local_80 = local_c8;
      local_70 = local_b8;
      local_d8 = 0;
      puStack_d0 = &local_90;
      while( true ) {
        uVar5 = FUN_07272f90(&local_90,DAT_091a6758);
        uVar4 = uStack_78;
        lVar1 = local_80;
        if ((uVar5 & 1) == 0) {
          FUN_072730b4(&local_90,DAT_091a6750);
          (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
          return;
        }
        plVar6 = (long *)FUN_03f5c394(DAT_09180318,4);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((lVar1 != 0) &&
           (lVar7 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar6 + 0x40)), lVar7 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((int)plVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar6[4] = lVar1;
        thunk_FUN_03f5d7b8(plVar6 + 4,lVar1);
        local_b0 = CONCAT44(local_b0._4_4_,(int)uVar4);
        lVar7 = FUN_03f5c42c(DAT_09535420,&local_b0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar6[5] = lVar7;
        thunk_FUN_03f5d7b8(plVar6 + 5,lVar7);
        local_dc = AnhPD_FoodOrder_LevelPieceBook__Get(*(undefined8 *)(param_1 + 0x38),lVar1);
        lVar7 = FUN_03f5c42c(DAT_09535420,&local_dc);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) {
          uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,0);
        }
        if (*(uint *)(plVar6 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar6[6] = lVar7;
        uVar4 = thunk_FUN_03f5d7b8(plVar6 + 6,lVar7);
        local_e0 = AnhPD_FoodOrder_LevelPieceBook__CountOwedByStations(uVar4,lVar1);
        lVar7 = FUN_03f5c42c(DAT_09535420,&local_e0);
        if ((lVar7 != 0) &&
           (lVar8 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar6 + 0x40)), lVar8 == 0)) break;
        if ((*(uint *)(plVar6 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar6[7] = lVar7;
        thunk_FUN_03f5d7b8(plVar6 + 7,lVar7);
        uVar4 = System_String__Format(DAT_09226450,plVar6,0);
        uVar2 = 0;
        if (*(long *)(param_1 + 0x10) != 0) {
          uVar2 = AnhPD_FoodOrder_LevelInfo__CountInboundFor(*(long *)(param_1 + 0x10),lVar1);
        }
        local_e4 = uVar2;
        uVar9 = FUN_03f5c42c(DAT_09535420,&local_e4);
        local_e8 = AnhPD_FoodOrder_LevelPieceBook__Get(*(undefined8 *)(param_1 + 0x40),lVar1);
        uVar10 = FUN_03f5c42c(DAT_09535420,&local_e8);
        local_ec = AnhPD_FoodOrder_LevelPieceBook__LevelFormRemaining(param_1,lVar1);
        uVar11 = FUN_03f5c42c(DAT_09535420,&local_ec);
        uVar9 = System_String__Format(DAT_09226448,uVar9,uVar10,uVar11,0);
        uVar4 = System_String__Concat(uVar4,uVar9,0);
        System_Text_StringBuilder__AppendLine(plVar3,uVar4,0);
      }
      uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

