// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$PushParentNamespaces
// address: 0x770fb88
// body: available
// range: 0x770fb88-0x77100cf inclusive
// range: 0x7710120-0x771016f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77100cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7710154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7710158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771015c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7710164 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771016c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077100c4) */
/* WARNING: Removing unreachable block (ram,0x077100c8) */
/* WARNING: Removing unreachable block (ram,0x07710160) */
/* WARNING: Removing unreachable block (ram,0x07710168) */

void Newtonsoft_Json_Converters_XmlNodeConverter__PushParentNamespaces
               (undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long *local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long *local_70;
  
  if ((DAT_095229c4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3248);
    FUN_03f5c2a4(&DAT_091a3250);
    FUN_03f5c2a4(&DAT_091a3258);
    FUN_03f5c2a4(&DAT_091869f8);
    FUN_03f5c2a4(&DAT_091ad7c8);
    FUN_03f5c2a4(&DAT_091ad7d0);
    FUN_03f5c2a4(&DAT_091ad7e0);
    FUN_03f5c2a4(&DAT_091ad7b8);
    FUN_03f5c2a4(&DAT_0917c448);
    FUN_03f5c2a4(&DAT_0921ceb0);
    FUN_03f5c2a4(&DAT_09225c00);
    DAT_095229c4 = 1;
  }
  puStack_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_70 = (long *)0x0;
  lVar11 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_a0 = 0;
  local_90 = (long *)0x0;
  while (param_2 != (long *)0x0) {
    lVar7 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_0770fcf4;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869f8,4);
LAB_0770fcf4:
    param_2 = (long *)(*(code *)*puVar3)(param_2,puVar3[1]);
    if (param_2 == (long *)0x0) {
      if (lVar11 != 0) {
        FUN_057e2674(lVar11,DAT_091ad7e0);
        FUN_057e185c(&local_b8,lVar11,DAT_091ad7d0);
        local_70 = local_a8;
        puStack_78 = puStack_b0;
        local_80 = local_b8;
        while (uVar9 = FUN_071bd28c(&local_80,DAT_091a3250), plVar4 = local_70, (uVar9 & 1) != 0) {
          if ((param_3 == (long *)0x0) ||
             ((**(code **)(*param_3 + 0x1d8))(param_3,*(undefined8 *)(*param_3 + 0x1e0)),
             plVar4 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar11 = *plVar4;
          uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 3) * 0x10 + 0x138);
                goto LAB_0770feac;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091869f8,3);
LAB_0770feac:
          lVar11 = (*(code *)*puVar3)(plVar4,puVar3[1]);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_057e185c(&local_b8,lVar11,DAT_091ad7d0);
          local_a0 = local_b8;
          local_b8 = 0;
          puStack_98 = puStack_b0;
          local_90 = local_a8;
          puStack_b0 = &local_a0;
          while (uVar9 = FUN_071bd28c(&local_a0,DAT_091a3250), plVar4 = local_90, (uVar9 & 1) != 0)
          {
            if (local_90 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *local_90;
            uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                  puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 8) * 0x10 + 0x138);
                  goto LAB_0770ff44;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar3 = (undefined8 *)FUN_03f95da8(local_90,DAT_091869f8,8);
LAB_0770ff44:
            uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
            uVar9 = System_String__op_Equality(uVar5,DAT_0921ceb0,0);
            if ((uVar9 & 1) != 0) {
              lVar11 = *plVar4;
              uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                    puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                    goto LAB_0770ffb0;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091869f8,1);
LAB_0770ffb0:
              uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
              uVar9 = System_String__op_Inequality(uVar5,DAT_09225c00,0);
              if ((uVar9 & 1) != 0) {
                lVar11 = *plVar4;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                      puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 1) * 0x10 + 0x138);
                      goto LAB_0771001c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091869f8,1);
LAB_0771001c:
                uVar5 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                lVar11 = *plVar4;
                uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar9 != 0) {
                  piVar10 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar10 + -2) == DAT_091869f8) {
                      puVar3 = (undefined8 *)(lVar11 + (long)(*piVar10 + 5) * 0x10 + 0x138);
                      goto LAB_0771007c;
                    }
                    uVar9 = uVar9 - 1;
                    piVar10 = piVar10 + 4;
                  } while (uVar9 != 0);
                }
                puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_091869f8,5);
LAB_0771007c:
                uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
                (**(code **)(*param_3 + 0x1f8))
                          (param_3,uVar5,uVar6,*(undefined8 *)(*param_3 + 0x200));
              }
            }
          }
          FUN_071bd288(&local_a0,DAT_091a3248);
        }
        FUN_071bd288(&local_80,DAT_091a3248);
      }
      return;
    }
    lVar7 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091869f8) {
          puVar3 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_0770fd54;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(param_2,DAT_091869f8,0);
LAB_0770fd54:
    iVar2 = (*(code *)*puVar3)(param_2,puVar3[1]);
    if (iVar2 == 1) {
      if (lVar11 == 0) {
        lVar11 = thunk_FUN_03f9944c(DAT_0917c448);
        FUN_057e0400(lVar11,DAT_091ad7b8);
        if (lVar11 == 0) break;
      }
      lVar7 = DAT_091ad7c8;
      lVar8 = *(long *)(lVar11 + 0x10);
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar8 == 0) break;
      uVar1 = *(uint *)(lVar11 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = (long)param_2;
        thunk_FUN_03f5d7b8(plVar4,param_2);
      }
      else {
        FUN_057e0c68(lVar11,param_2,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

