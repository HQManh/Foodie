// rea decompile_all
// name: CakeOrder.Home.Map.HomeLevelNode$$SetUp
// address: 0x434cf60
// body: available
// range: 0x434cf60-0x434d49b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x434d464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434d48c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x434d498 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Map_HomeLevelNode__SetUp
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,byte param_10)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  int local_64;
  
  if ((DAT_0951779d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_0917fce0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180528);
    FUN_03f5c2a4(&DAT_0921a2c8);
    DAT_0951779d = 1;
  }
  *(undefined8 *)(param_5 + 0xb8) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_5 + 0xb8),param_6);
  *(undefined4 *)(param_5 + 0x48) = param_7;
  *(undefined4 *)(param_5 + 0x4c) = param_8;
  *(undefined4 *)(param_5 + 0x50) = 0;
  lVar1 = UnityEngine_Component__get_transform(param_5,0);
  if (lVar1 != 0) {
    UnityEngine_Transform__set_localPosition(param_1,lVar1,0);
    uVar4 = DAT_09180318;
    *(undefined4 *)(param_5 + 0xcc) = param_9;
    *(byte *)(param_5 + 200) = param_10 & 1;
    plVar2 = (long *)FUN_03f5c394(uVar4,1);
    local_64 = *(int *)(param_5 + 0x48) + 1;
    lVar1 = FUN_03f5c42c(DAT_09535420,&local_64);
    if (plVar2 != (long *)0x0) {
      if ((lVar1 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar2[3] == 0) {
LAB_0434d48c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[4] = lVar1;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar1);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921a2c8,plVar2,0);
      lVar1 = *(long *)(param_5 + 0x90);
      if (lVar1 == 0) {
LAB_0434d13c:
        lVar1 = *(long *)(param_5 + 0x60);
        if (lVar1 == 0) {
LAB_0434d18c:
          lVar1 = *(long *)(param_5 + 0x68);
          if (lVar1 == 0) {
LAB_0434d1dc:
            uVar4 = *(undefined8 *)(param_5 + 0x70);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar5 = UnityEngine_Object__op_Inequality(uVar4,0,0);
            if ((uVar5 & 1) == 0) {
LAB_0434d3bc:
              if (*(long *)(param_5 + 0x98) == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *(undefined4 *)(*(long *)(param_5 + 0x98) + 0x18);
              }
              lVar1 = FUN_03f5c394(DAT_0917fce0,uVar10);
              plVar2 = (long *)(param_5 + 0xb0);
              *plVar2 = lVar1;
              thunk_FUN_03f5d7b8(plVar2,lVar1);
              lVar1 = *plVar2;
              if (lVar1 != 0) {
                lVar8 = 0;
                lVar3 = 0;
                do {
                  if (*(int *)(lVar1 + 0x18) <= (int)(uint)lVar3) {
                    return;
                  }
                  lVar7 = *(long *)(param_5 + 0x98);
                  if (lVar7 == 0) break;
                  if (*(uint *)(lVar7 + 0x18) <= (uint)lVar3) goto LAB_0434d48c;
                  lVar7 = *(long *)(lVar7 + lVar3 * 8 + 0x20);
                  if (lVar7 == 0) break;
                  uVar10 = UnityEngine_SpriteRenderer__get_color(lVar7,0);
                  lVar3 = lVar3 + 1;
                  if (*(uint *)(lVar1 + 0x18) <= (int)lVar3 - 1U) goto LAB_0434d48c;
                  lVar1 = lVar1 + lVar8;
                  lVar8 = lVar8 + 0x10;
                  *(undefined4 *)(lVar1 + 0x20) = uVar10;
                  *(undefined4 *)(lVar1 + 0x24) = param_2;
                  *(undefined4 *)(lVar1 + 0x28) = param_3;
                  *(undefined4 *)(lVar1 + 0x2c) = param_4;
                  lVar1 = *plVar2;
                } while (lVar1 != 0);
              }
            }
            else if (*(long *)(param_5 + 0x70) != 0) {
              uVar10 = UnityEngine_Transform__get_localScale(*(long *)(param_5 + 0x70),0);
              lVar1 = *(long *)(param_5 + 0x70);
              *(undefined4 *)(param_5 + 0x88) = uVar10;
              if (DAT_09515ce6 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515ce6 = '\x01';
              }
              if (lVar1 != 0) {
                puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
                param_2 = puVar6[1];
                param_3 = puVar6[2];
                UnityEngine_Transform__set_localScale(*puVar6,lVar1,0);
                if (*(long *)(param_5 + 0x78) != 0) {
                  lVar1 = FUN_03f5c394(DAT_09180528,
                                       *(undefined4 *)(*(long *)(param_5 + 0x78) + 0x18));
                  plVar2 = (long *)(param_5 + 0x80);
                  *plVar2 = lVar1;
                  thunk_FUN_03f5d7b8(plVar2,lVar1);
                  lVar1 = *(long *)(param_5 + 0x78);
                  if (lVar1 != 0) {
                    uVar9 = 0;
                    while ((int)uVar9 < (int)*(uint *)(lVar1 + 0x18)) {
                      if (*(uint *)(lVar1 + 0x18) <= uVar9) goto LAB_0434d48c;
                      lVar3 = (long)(int)uVar9;
                      lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
                      if (lVar1 == 0) goto LAB_0434d464;
                      lVar8 = *plVar2;
                      uVar10 = UnityEngine_Transform__get_localScale(lVar1,0);
                      if (lVar8 == 0) goto LAB_0434d464;
                      if (*(uint *)(lVar8 + 0x18) <= uVar9) goto LAB_0434d48c;
                      lVar1 = *(long *)(param_5 + 0x78);
                      *(undefined4 *)(lVar8 + lVar3 * 4 + 0x20) = uVar10;
                      if (lVar1 == 0) goto LAB_0434d464;
                      if (*(uint *)(lVar1 + 0x18) <= uVar9) goto LAB_0434d48c;
                      lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
                      if (DAT_09515ce6 == '\0') {
                        FUN_03f5c2a4(&DAT_0918cbd0);
                        DAT_09515ce6 = '\x01';
                      }
                      if (lVar1 == 0) goto LAB_0434d464;
                      puVar6 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
                      param_2 = puVar6[1];
                      param_3 = puVar6[2];
                      UnityEngine_Transform__set_localScale(*puVar6,lVar1,0);
                      lVar1 = *(long *)(param_5 + 0x78);
                      if (lVar1 == 0) goto LAB_0434d464;
                      if (*(uint *)(lVar1 + 0x18) <= uVar9) goto LAB_0434d48c;
                      lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
                      if ((lVar1 == 0) ||
                         (lVar1 = UnityEngine_Component__get_gameObject(lVar1,0), lVar1 == 0))
                      goto LAB_0434d464;
                      UnityEngine_GameObject__SetActive
                                (lVar1,(int)uVar9 < *(int *)(param_5 + 0xcc),0);
                      lVar1 = *(long *)(param_5 + 0x78);
                      uVar9 = uVar9 + 1;
                      if (lVar1 == 0) goto LAB_0434d464;
                    }
                    if ((*(long *)(param_5 + 0x70) != 0) &&
                       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_5 + 0x70),0),
                       lVar1 != 0)) {
                      UnityEngine_GameObject__SetActive(lVar1,*(int *)(param_5 + 0x4c) == 2,0);
                      goto LAB_0434d3bc;
                    }
                  }
                }
              }
            }
          }
          else {
            lVar3 = 0;
            do {
              if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)lVar3) goto LAB_0434d1dc;
              if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) goto LAB_0434d48c;
              lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
              if (lVar1 == 0) break;
              UnityEngine_GameObject__SetActive(lVar1,*(int *)(param_5 + 0x4c) != 0,0);
              lVar1 = *(long *)(param_5 + 0x68);
              lVar3 = lVar3 + 1;
            } while (lVar1 != 0);
          }
        }
        else {
          lVar3 = 0;
          do {
            if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)lVar3) goto LAB_0434d18c;
            if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) goto LAB_0434d48c;
            lVar1 = *(long *)(lVar1 + lVar3 * 8 + 0x20);
            if (lVar1 == 0) break;
            UnityEngine_GameObject__SetActive(lVar1,*(int *)(param_5 + 0x4c) == 0,0);
            lVar1 = *(long *)(param_5 + 0x60);
            lVar3 = lVar3 + 1;
          } while (lVar1 != 0);
        }
      }
      else {
        lVar3 = 0;
        do {
          if ((int)*(uint *)(lVar1 + 0x18) <= (int)(uint)lVar3) goto LAB_0434d13c;
          if (*(uint *)(lVar1 + 0x18) <= (uint)lVar3) goto LAB_0434d48c;
          plVar2 = *(long **)(lVar1 + lVar3 * 8 + 0x20);
          if (plVar2 == (long *)0x0) break;
          (**(code **)(*plVar2 + 0x558))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x560));
          lVar1 = *(long *)(param_5 + 0x90);
          lVar3 = lVar3 + 1;
        } while (lVar1 != 0);
      }
    }
  }
LAB_0434d464:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

