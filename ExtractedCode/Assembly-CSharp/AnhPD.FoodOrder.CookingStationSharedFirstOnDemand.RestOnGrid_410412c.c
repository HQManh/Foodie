// rea decompile_all
// name: AnhPD.FoodOrder.CookingStationSharedFirstOnDemand$$RestOnGrid
// address: 0x410412c
// body: available
// range: 0x410412c-0x41044c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41044b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41044b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41044b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41044bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41044c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41044c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CookingStationSharedFirstOnDemand__RestOnGrid
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_e8;
  undefined8 *puStack_e0;
  long local_d8;
  int local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_09516184 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f998);
    FUN_03f5c2a4(&DAT_0919f9b0);
    FUN_03f5c2a4(&DAT_0919f9c8);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a6750);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a6758);
    FUN_03f5c2a4(&DAT_091a6760);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091a9810);
    FUN_03f5c2a4(&DAT_091ac6b0);
    DAT_09516184 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_78 = 0;
  local_7c = 0;
  local_90 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_cc = 0;
  if (*(char *)(param_1 + 200) == '\0') {
    *(undefined1 *)(param_1 + 200) = 1;
    if ((*(long *)(param_1 + 0xb8) == 0) ||
       (FUN_06fca5d0(*(long *)(param_1 + 0xb8),DAT_0919f998), param_2 == 0)) goto LAB_041044b0;
    AnhPD_FoodOrder_LevelPieceBook__CollectGridTakeables(param_2,*(undefined8 *)(param_1 + 0xc0),0);
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_041044b0;
    FUN_057e185c(&local_e8,*(long *)(param_1 + 0xc0),DAT_091ac6b0);
    puStack_68 = puStack_e0;
    local_70 = local_e8;
    local_60 = local_d8;
    local_e8 = 0;
    puStack_e0 = &local_70;
    while (uVar4 = FUN_071bd28c(&local_70,DAT_091a2a58), (uVar4 & 1) != 0) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = *(undefined8 *)(local_60 + 0x78);
      FUN_06fcbf70(*(long *)(param_1 + 0xb8),uVar6,(long)&local_78 + 4,DAT_0919f9c8);
      if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06fca434(*(long *)(param_1 + 0xb8),uVar6,local_78._4_4_ + 1,DAT_0919f9f0);
    }
    FUN_071bd288(&local_70,DAT_091a2a50);
  }
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (FUN_06fca5d0(*(long *)(param_1 + 0xd0),DAT_0919f998), param_3 != 0)) {
    lVar5 = *(long *)(param_3 + 0x10);
    local_78 = local_78 & 0xffffffff00000000;
    if (lVar5 != 0) {
      uVar3 = *(uint *)(lVar5 + 0x18);
      if (0 < (int)uVar3) {
        lVar7 = 0;
        bVar1 = false;
        do {
          if (uVar3 <= (uint)lVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(lVar5 + 0x20 + lVar7 * 8);
          if (bVar1) {
            if (lVar8 == 0) goto LAB_041044b0;
LAB_04104384:
            if (*(long *)(param_1 + 0xd0) == 0) goto LAB_041044b0;
            FUN_06fcbf70(*(long *)(param_1 + 0xd0),*(undefined8 *)(lVar8 + 0x10),&local_7c,
                         DAT_0919f9c8);
            if (*(long *)(param_1 + 0xd0) == 0) goto LAB_041044b0;
            FUN_06fca434(*(long *)(param_1 + 0xd0),*(undefined8 *)(lVar8 + 0x10),local_7c + 1,
                         DAT_0919f9f0);
          }
          else {
            if (lVar8 == 0) goto LAB_041044b0;
            uVar4 = System_String__op_Equality(*(undefined8 *)(lVar8 + 0x10),param_4,0);
            if ((uVar4 & 1) == 0) goto LAB_04104384;
            bVar1 = true;
          }
          uVar3 = *(uint *)(lVar5 + 0x18);
          lVar7 = lVar7 + 1;
          local_78 = CONCAT44(local_78._4_4_,(int)lVar7);
        } while ((int)lVar7 < (int)uVar3);
      }
      if (*(long *)(param_1 + 0xd0) != 0) {
        FUN_06fca844(&local_b0,*(long *)(param_1 + 0xd0),DAT_0919f9b0);
        local_e8 = 0;
        puStack_e0 = &local_b0;
        do {
          uVar3 = FUN_07272f90(&local_b0,DAT_091a6758);
          if ((uVar3 & 1) == 0) break;
          uStack_b8 = uStack_98;
          local_c0 = local_a0;
          FUN_05614644(&local_c0,&local_c8,&local_78,DAT_091a9810);
          uVar6 = local_c8;
          if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar2 = (int)local_78;
          FUN_06fcbf70(*(long *)(param_1 + 0xb8),local_c8,&local_cc,DAT_0919f9c8);
          uVar4 = System_String__op_Equality(uVar6,param_4,0);
          if ((uVar4 & 1) != 0) {
            local_cc = local_cc + -1;
          }
        } while (iVar2 <= local_cc);
        FUN_072730b4(&local_b0,DAT_091a6750);
        return (uVar3 ^ 1) & 1;
      }
    }
  }
LAB_041044b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

