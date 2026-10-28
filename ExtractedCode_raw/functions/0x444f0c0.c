// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ShiftUp
// address: 0x444f0c0
// body: available
// range: 0x444f0c0-0x444f453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444f444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444f448 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444f44c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444f450 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CookingGraph_CookingLevelSimulation__ShiftUp(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  undefined8 uStack_68;
  
  if ((DAT_09518014 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c67d8);
    FUN_03f5c2a4(&DAT_091ca858);
    FUN_03f5c2a4(&DAT_091ca290);
    FUN_03f5c2a4(&DAT_091caf58);
    FUN_03f5c2a4(&DAT_091a20c8);
    FUN_03f5c2a4(&DAT_091a20d0);
    FUN_03f5c2a4(&DAT_091a20d8);
    FUN_03f5c2a4(&DAT_09178340);
    FUN_03f5c2a4(&DAT_09179408);
    FUN_03f5c2a4(&DAT_091aac38);
    FUN_03f5c2a4(&DAT_091aac40);
    FUN_03f5c2a4(&DAT_091aac48);
    FUN_03f5c2a4(&DAT_091aa7e0);
    FUN_03f5c2a4(&DAT_091b25a0);
    FUN_03f5c2a4(&DAT_091e79d8);
    FUN_03f5c2a4(&DAT_0918f298);
    FUN_03f5c2a4(&DAT_0920cfc0);
    DAT_09518014 = 1;
  }
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  lVar2 = CookingGraph_CookingLevelSimulation__ShiftUpMoves(param_1);
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 0x18);
    if (iVar1 != 0) {
      uVar3 = thunk_FUN_03f9944c(DAT_09178340);
      FUN_05310300(uVar3,param_1,DAT_091c67d8,0);
      uVar3 = FUN_04aefb0c(lVar2,uVar3,DAT_091ca290);
      lVar4 = FUN_04b049e4(uVar3,DAT_091caf58);
      FUN_056cfb68(&local_a0,lVar2,DAT_091aac38);
      local_80 = local_a0;
      local_a0 = 0;
      puStack_78 = puStack_98;
      uStack_68 = uStack_88;
      local_70 = uStack_90;
      puStack_98 = &local_80;
      while (uVar5 = FUN_0718a218(&local_80,DAT_091a20d0), uVar8 = local_70, (uVar5 & 1) != 0) {
        if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = FUN_057e0998(*(long *)(param_1 + 0x80),local_70 & 0xffffffff,DAT_091aa7e0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_057e09ec(lVar6,uVar8 >> 0x20,0,DAT_091b25a0);
      }
      FUN_0718a214(&local_80,DAT_091a20c8);
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar8 = 0;
        do {
          lVar6 = *(long *)(param_1 + 0x80);
          uVar3 = FUN_056cebb8(lVar2,uVar8 & 0xffffffff,DAT_091aac48);
          if (lVar6 == 0) goto LAB_0444f444;
          lVar6 = FUN_057e0998(lVar6,uVar3,DAT_091aa7e0);
          FUN_056cebb8(lVar2,uVar8 & 0xffffffff,DAT_091aac48);
          if (lVar4 == 0) goto LAB_0444f444;
          if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (lVar6 == 0) goto LAB_0444f444;
          FUN_057e09ec(lVar6,extraout_x1,*(undefined8 *)(lVar4 + 0x20 + uVar8 * 8),DAT_091b25a0);
          uVar8 = uVar8 + 1;
        } while ((long)uVar8 < (long)*(int *)(lVar2 + 0x18));
      }
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = DAT_0920cfc0;
      puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      lVar2 = puVar7[0x35];
      if (lVar2 == 0) {
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar7 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        }
        uVar9 = *puVar7;
        lVar2 = thunk_FUN_03f9944c(DAT_09179408);
        FUN_05323c00(lVar2,uVar9,DAT_091e79d8,0);
        lVar6 = *(long *)(DAT_0918f298 + 0xb8);
        *(long *)(lVar6 + 0x1a8) = lVar2;
        thunk_FUN_03f5d7b8(lVar6 + 0x1a8,lVar2);
      }
      uVar9 = FUN_04af73b4(lVar4,lVar2,DAT_091ca858);
      if (param_1 == 0) goto LAB_0444f444;
      CookingGraph_CookingLevelSimulation__Emit(param_1,1,0xffffffff,uVar3,uVar9);
    }
    return iVar1 != 0;
  }
LAB_0444f444:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

