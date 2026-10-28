// rea decompile_all
// name: TrungKien.UI.NewFearther.NewToolLevelPreview$$GetObstacleKeysOfLevel
// address: 0x4085728
// body: available
// range: 0x4085728-0x4085a2b inclusive
// range: 0x4085a5c-0x4085cab inclusive
// range: 0x4085cb0-0x4085cb3 inclusive
// range: 0x4085cb8-0x4085cbb inclusive
// range: 0x4085d0c-0x4085d43 inclusive
// range: 0x4085d94-0x4085d9b inclusive
// range: 0x4085df4-0x4085e1f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4085a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085a24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085a28 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085ca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085cb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085cb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085d40 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4085d98 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04085ca0) */
/* WARNING: Removing unreachable block (ram,0x04085ca4) */
/* WARNING: Removing unreachable block (ram,0x04085d3c) */
/* WARNING: Removing unreachable block (ram,0x04085d34) */
/* WARNING: Removing unreachable block (ram,0x04085d38) */

long TrungKien_UI_NewFearther_NewToolLevelPreview__GetObstacleKeysOfLevel
               (undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  int local_12c;
  long local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_108;
  undefined8 *puStack_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 *puStack_c8;
  long local_c0;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_09515c90 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3ec0);
    FUN_03f5c2a4(&DAT_091a3ea8);
    FUN_03f5c2a4(&DAT_091a2b40);
    FUN_03f5c2a4(&DAT_091a3398);
    FUN_03f5c2a4(&DAT_091a33a0);
    FUN_03f5c2a4(&DAT_091a3eb0);
    FUN_03f5c2a4(&DAT_091a2b48);
    FUN_03f5c2a4(&DAT_091a3ec8);
    FUN_03f5c2a4(&DAT_091a33a8);
    FUN_03f5c2a4(&DAT_091a3eb8);
    FUN_03f5c2a4(&DAT_091a3ed0);
    FUN_03f5c2a4(&DAT_091a2b50);
    FUN_03f5c2a4(&DAT_09171ea8);
    FUN_03f5c2a4(&DAT_09186c38);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091ac858);
    FUN_03f5c2a4(&DAT_091af4d0);
    FUN_03f5c2a4(&DAT_091af4a8);
    FUN_03f5c2a4(&DAT_091ada70);
    FUN_03f5c2a4(&DAT_0920d3e0);
    FUN_03f5c2a4(&DAT_0920d3d8);
    DAT_09515c90 = 1;
  }
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  lVar3 = TrungKien_UI_NewFearther_NewToolLevelPreview__GetGridObstacleKeysOfLevel(param_1,param_2);
  lVar4 = TrungKien_UI_NewFearther_NewToolLevelPreview__GetLevelDesign(param_1,param_2);
  uVar5 = System_String__IsNullOrEmpty(lVar4,0);
  if ((uVar5 & 1) == 0) {
    if (lVar4 == 0) {
LAB_04085d94:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = System_String__Split(lVar4,0x7e,0,0);
    if (((lVar4 != 0) && (2 < *(int *)(lVar4 + 0x18))) &&
       (uVar5 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x30),0), (uVar5 & 1) == 0)) {
      if (*(uint *)(lVar4 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar5 = CookingGraph_IngredientQueueTranslator__TryParse
                        (*(undefined8 *)(lVar4 + 0x30),&local_68,&local_70,0);
      if (((uVar5 & 1) != 0) && (local_68 != 0)) {
        if (*(long *)(local_68 + 0x18) != 0) {
          FUN_057e185c(&local_108,*(long *)(local_68 + 0x18),DAT_091af4a8);
          puStack_88 = puStack_100;
          local_90 = local_108;
          local_80 = local_f8;
          puStack_100 = &local_90;
          local_108 = 0;
          while (uVar5 = FUN_071bd28c(&local_90,DAT_091a3eb0), (uVar5 & 1) != 0) {
            if (local_80 != 0) {
              puVar6 = &DAT_0920d3e0;
              if (*(int *)(local_80 + 0x10) != 1) {
                puVar6 = &DAT_0920d3d8;
              }
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar9 = *puVar6;
              uVar5 = FUN_057e1004(lVar3,uVar9,DAT_091b0590);
              lVar4 = DAT_091b0570;
              if ((uVar5 & 1) == 0) {
                lVar8 = *(long *)(lVar3 + 0x10);
                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = *(uint *)(lVar3 + 0x18);
                if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                  puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                  *puVar6 = uVar9;
                  thunk_FUN_03f5d7b8(puVar6,uVar9);
                }
                else {
                  FUN_057e0c68(lVar3,uVar9,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
          }
          FUN_039af95c(&local_108);
          if (local_68 == 0) goto LAB_04085d94;
        }
        if (*(long *)(local_68 + 0x10) != 0) {
          FUN_057e185c(&local_108,*(long *)(local_68 + 0x10),DAT_091ada70);
          puStack_a8 = puStack_100;
          local_b0 = local_108;
          local_a0 = local_f8;
          puStack_110 = &local_b0;
          local_118 = 0;
          while (uVar5 = FUN_071bd28c(&local_b0,DAT_091a33a0), (uVar5 & 1) != 0) {
            if ((local_a0 != 0) && (*(long *)(local_a0 + 0x10) != 0)) {
              FUN_057e185c(&local_108,*(long *)(local_a0 + 0x10),DAT_091af4d0);
              local_c0 = local_f8;
              local_120 = &local_d0;
              puStack_c8 = puStack_100;
              local_d0 = local_108;
              local_128 = 0;
              while (uVar5 = FUN_071bd28c(&local_d0,DAT_091a3ec8), (uVar5 & 1) != 0) {
                if ((local_c0 != 0) && (*(long *)(local_c0 + 0x28) != 0)) {
                  FUN_057e185c(&local_108,*(long *)(local_c0 + 0x28),DAT_091ac858);
                  local_e0 = local_f8;
                  puStack_e8 = puStack_100;
                  local_f0 = local_108;
                  local_108 = 0;
                  puStack_100 = &local_f0;
                  while (uVar5 = FUN_071bd28c(&local_f0,DAT_091a2b48), uVar9 = DAT_09171ea8,
                        (uVar5 & 1) != 0) {
                    if (local_e0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    iVar1 = *(int *)(local_e0 + 0x10);
                    if (iVar1 != 0) {
                      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar9 = System_Type__GetTypeFromHandle(uVar9,0);
                      local_12c = iVar1;
                      uVar7 = FUN_03f5c42c(DAT_09186c38,&local_12c);
                      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar5 = System_Enum__IsDefined(uVar9,uVar7,0);
                      if ((uVar5 & 1) != 0) {
                        uVar9 = TrungKien_UI_NewFearther_UINewFeartherConfig__SlotObstacleKey(iVar1)
                        ;
                        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        uVar5 = FUN_057e1004(lVar3,uVar9,DAT_091b0590);
                        lVar4 = DAT_091b0570;
                        if ((uVar5 & 1) == 0) {
                          lVar8 = *(long *)(lVar3 + 0x10);
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_03f5c550();
                          }
                          uVar2 = *(uint *)(lVar3 + 0x18);
                          if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar2 + 1;
                            puVar6 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                            *puVar6 = uVar9;
                            thunk_FUN_03f5d7b8(puVar6,uVar9);
                          }
                          else {
                            FUN_057e0c68(lVar3,uVar9,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                        }
                      }
                    }
                  }
                  FUN_071bd288(&local_f0,DAT_091a2b40);
                }
              }
              FUN_071bd288(local_120,DAT_091a3ec0);
              if (local_128 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c548();
              }
            }
          }
          FUN_039af9ec(&local_118);
        }
      }
    }
  }
  return lVar3;
}

