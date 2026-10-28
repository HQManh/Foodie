// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveTwoColumnLayout$$CollectChildren
// address: 0x42201f4
// body: available
// range: 0x42201f4-0x4220583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4220560 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AdaptiveTwoColumnLayout__CollectChildren(long param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  int iVar12;
  long lVar13;
  long *local_70;
  long *local_68;
  
  if ((DAT_09516d24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5908);
    FUN_03f5c2a4(&DAT_091c5910);
    FUN_03f5c2a4(&DAT_091857f0);
    FUN_03f5c2a4(&DAT_09185f50);
    FUN_03f5c2a4(&DAT_091af738);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091af748);
    FUN_03f5c2a4(&DAT_091ab3f0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516d24 = 1;
  }
  lVar8 = *(long *)(param_1 + 0x40);
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (lVar8 != 0) {
    iVar12 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar12) {
      System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
    }
    lVar8 = *(long *)(param_1 + 0x48);
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      lVar8 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar8 != 0) {
        iVar12 = 0;
        lVar13 = 0;
        do {
          iVar3 = UnityEngine_Transform__get_childCount(lVar8,0);
          if (iVar3 <= iVar12) {
            return;
          }
          lVar8 = UnityEngine_Component__get_transform(param_1,0);
          if (lVar8 == 0) break;
          plVar4 = (long *)UnityEngine_Transform__GetChild(lVar8,iVar12,0);
          lVar7 = lVar13;
          if ((plVar4 != (long *)0x0) && (*plVar4 == DAT_09189c98)) {
            lVar8 = UnityEngine_Component__get_gameObject(plVar4,0);
            if (lVar8 == 0) break;
            uVar5 = UnityEngine_GameObject__get_activeSelf(lVar8,0);
            if ((uVar5 & 1) != 0) {
              uVar5 = FUN_04a6b048(plVar4,&local_68,DAT_091c5910);
              plVar10 = local_68;
              if ((uVar5 & 1) != 0) {
                if (local_68 == (long *)0x0) break;
                lVar8 = *local_68;
                uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar5 != 0) {
                  piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == DAT_09185f50) {
                      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_042203e8;
                    }
                    uVar5 = uVar5 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185f50,0);
LAB_042203e8:
                uVar5 = (*(code *)*puVar6)(plVar10,puVar6[1]);
                if ((uVar5 & 1) != 0) goto LAB_0422054c;
              }
              lVar8 = DAT_091af738;
              lVar7 = *(long *)(param_1 + 0x40);
              if (lVar7 == 0) break;
              lVar9 = *(long *)(lVar7 + 0x10);
              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
              if (lVar9 == 0) break;
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                *plVar10 = (long)plVar4;
                thunk_FUN_03f5d7b8(plVar10,plVar4);
              }
              else {
                FUN_057e0c68(lVar7,plVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
              lVar8 = *(long *)(param_1 + 0x48);
              uVar5 = FUN_04a6b048(plVar4,&local_70,DAT_091c5908);
              plVar4 = local_70;
              lVar7 = lVar8;
              if ((uVar5 & 1) == 0) {
                lVar7 = lVar13;
              }
              if ((uVar5 & 1) == 0) {
                bVar2 = 0;
              }
              else {
                if (local_70 == (long *)0x0) break;
                lVar8 = *local_70;
                uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
                if (uVar5 != 0) {
                  piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar11 + -2) == DAT_091857f0) {
                      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
                      goto LAB_042204e0;
                    }
                    uVar5 = uVar5 - 1;
                    piVar11 = piVar11 + 4;
                  } while (uVar5 != 0);
                }
                puVar6 = (undefined8 *)FUN_03f95da8(local_70,DAT_091857f0,0);
LAB_042204e0:
                bVar2 = (*(code *)*puVar6)(plVar4,puVar6[1]);
                lVar8 = lVar7;
              }
              lVar13 = DAT_091ab3e8;
              if (lVar8 == 0) break;
              lVar9 = *(long *)(lVar8 + 0x10);
              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
              if (lVar9 == 0) break;
              uVar1 = *(uint *)(lVar8 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                *(byte *)(lVar9 + (int)uVar1 + 0x20) = bVar2 & 1;
              }
              else {
                FUN_0571c0e8(lVar8,bVar2 & 1,
                             *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              }
            }
          }
LAB_0422054c:
          iVar12 = iVar12 + 1;
          lVar8 = UnityEngine_Component__get_transform(param_1,0);
          lVar13 = lVar7;
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

