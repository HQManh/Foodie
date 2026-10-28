// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$DebugJamState
// address: 0x4100444
// body: available
// range: 0x4100444-0x41008e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41008d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41008d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41008e4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_CookingStation__DebugJamState(long *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint local_7c;
  undefined1 local_78 [4];
  char local_74 [4];
  byte local_70 [4];
  undefined4 local_6c;
  long local_68;
  
  if ((DAT_09516167 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f5a98);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_0921d318);
    FUN_03f5c2a4(&DAT_09221a38);
    FUN_03f5c2a4(&DAT_0921ccd0);
    FUN_03f5c2a4(&DAT_0921fda0);
    DAT_09516167 = 1;
  }
  local_68 = 0;
  local_6c = 0;
  uVar11 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar11,0);
  if ((uVar5 & 1) == 0) {
    return DAT_0921fda0;
  }
  if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
    lVar6 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
    if (lVar6 == 0) {
      return DAT_0921fda0;
    }
    if (param_1[0xc] != 0) {
      uVar1 = *(uint *)(param_1[0xc] + 0x14);
      bVar3 = AnhPD_FoodOrder_LevelInfo__IsInbound(lVar6,param_1,0);
      if ((param_1[0xc] != 0) && (param_1[0xd] != 0)) {
        cVar2 = *(char *)(param_1[0xc] + 0x10);
        uVar4 = *(undefined1 *)(param_1[0xd] + 0x50);
        uVar11 = DAT_091f8a38;
        if ((cVar2 != '\0') && (-1 < (int)uVar1)) {
          if (param_1[0xb] == 0) goto LAB_041008d8;
          if ((int)uVar1 < *(int *)(param_1[0xb] + 0x18)) {
            local_6c = AnhPD_FoodOrder_CookingStation__CountHomesForResult(param_1,uVar1,1);
            uVar11 = System_Int32__ToString(&local_6c,0);
          }
        }
        uVar5 = AnhPD_FoodOrder_CookingStation__TryPickSwapRaw(param_1,&local_68);
        puVar13 = &DAT_091f8a38;
        if ((uVar5 & 1) != 0) {
          if (local_68 == 0) goto LAB_041008d8;
          puVar13 = (undefined8 *)(local_68 + 0x78);
        }
        uVar12 = *puVar13;
        lVar6 = FUN_03f5c394(DAT_091805f8,5);
        plVar7 = (long *)FUN_03f5c394(DAT_09180318,4);
        local_70[0] = bVar3 & 1;
        lVar8 = FUN_03f5c42c(DAT_09535400,local_70);
        if (plVar7 != (long *)0x0) {
          if ((lVar8 != 0) &&
             (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0)) {
LAB_041008dc:
            uVar11 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar11,0);
          }
          if ((int)plVar7[3] != 0) {
            plVar7[4] = lVar8;
            thunk_FUN_03f5d7b8(plVar7 + 4,lVar8);
            local_74[0] = cVar2;
            lVar8 = FUN_03f5c42c(DAT_09535400,local_74);
            if ((lVar8 != 0) &&
               (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
            goto LAB_041008dc;
            if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
              plVar7[5] = lVar8;
              thunk_FUN_03f5d7b8(plVar7 + 5,lVar8);
              local_78[0] = uVar4;
              lVar8 = FUN_03f5c42c(DAT_09535400,local_78);
              if ((lVar8 != 0) &&
                 (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
              goto LAB_041008dc;
              if (2 < *(uint *)(plVar7 + 3)) {
                plVar7[6] = lVar8;
                thunk_FUN_03f5d7b8(plVar7 + 6,lVar8);
                local_7c = uVar1;
                lVar8 = FUN_03f5c42c(DAT_09535420,&local_7c);
                if ((lVar8 != 0) &&
                   (lVar9 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0))
                goto LAB_041008dc;
                if ((*(uint *)(plVar7 + 3) & 0xfffffffc) != 0) {
                  plVar7[7] = lVar8;
                  thunk_FUN_03f5d7b8(plVar7 + 7,lVar8);
                  uVar10 = System_String__Format(DAT_0921d318,plVar7,0);
                  if (lVar6 == 0) goto LAB_041008d8;
                  if (*(int *)(lVar6 + 0x18) != 0) {
                    *(undefined8 *)(lVar6 + 0x20) = uVar10;
                    thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),uVar10);
                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) != 0) {
                      *(undefined8 *)(lVar6 + 0x28) = DAT_09221a38;
                      thunk_FUN_03f5d7b8();
                      uVar10 = DAT_091f8a38;
                      if (-1 < (int)uVar1) {
                        if (param_1[0xb] == 0) goto LAB_041008d8;
                        if ((int)uVar1 < *(int *)(param_1[0xb] + 0x18)) {
                          uVar10 = (**(code **)(*param_1 + 0x228))
                                             (param_1,uVar1,*(undefined8 *)(*param_1 + 0x230));
                        }
                      }
                      if (2 < *(uint *)(lVar6 + 0x18)) {
                        *(undefined8 *)(lVar6 + 0x30) = uVar10;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30));
                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
                          *(undefined8 *)(lVar6 + 0x38) = DAT_091f5a98;
                          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x38));
                          uVar4 = AnhPD_FoodOrder_CookingStation__get_IsResolvingJam(param_1);
                          local_7c = CONCAT31(local_7c._1_3_,uVar4) & 0xffffff01;
                          uVar10 = FUN_03f5c42c(DAT_09535400,&local_7c);
                          uVar11 = System_String__Format(DAT_0921ccd0,uVar11,uVar12,uVar10,0);
                          if (4 < *(uint *)(lVar6 + 0x18)) {
                            *(undefined8 *)(lVar6 + 0x40) = uVar11;
                            thunk_FUN_03f5d7b8();
                            uVar11 = System_String__Concat(lVar6,0);
                            return uVar11;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
      }
    }
  }
LAB_041008d8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

