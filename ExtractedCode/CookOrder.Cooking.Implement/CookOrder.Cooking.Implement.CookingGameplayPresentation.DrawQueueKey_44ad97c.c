// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$DrawQueueKey
// address: 0x44ad97c
// body: available
// range: 0x44ad97c-0x44ade93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ade20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ade8c to 0x6f533d0 FUN_06f533d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44ade90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__DrawQueueKey
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
               long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int *piVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined8 uVar16;
  float fVar17;
  
  if ((DAT_09518220 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e378);
    FUN_03f5c2a4(&DAT_0919e380);
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_091abf78);
    FUN_03f5c2a4(&DAT_091abf70);
    FUN_03f5c2a4(&DAT_0917bf38);
    FUN_03f5c2a4(&DAT_091d4b80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518220 = 1;
  }
  uVar14 = *(undefined8 *)(param_4 + 0x268);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar14,0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if ((param_5 != 0) && (*(long *)(param_4 + 200) != 0)) {
    uVar6 = FUN_06f535c4(*(long *)(param_4 + 200),*(undefined8 *)(param_5 + 0x10),DAT_0919e380);
    if ((uVar6 & 1) != 0) {
      return;
    }
    plVar15 = *(long **)(param_5 + 0x40);
    if (plVar15 != (long *)0x0) {
      lVar9 = *plVar15;
      uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar6 != 0) {
        piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == DAT_0917b378) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_044adad8;
          }
          uVar6 = uVar6 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar6 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b378,0);
LAB_044adad8:
      iVar4 = (*(code *)*puVar7)(plVar15,puVar7[1]);
      if (iVar4 == 0) {
        return;
      }
      lVar9 = thunk_FUN_03f9944c(DAT_0917bf38);
      FUN_057e0400(lVar9,DAT_091abf70);
      plVar15 = *(long **)(param_5 + 0x40);
      if (plVar15 != (long *)0x0) {
        iVar4 = 0;
        do {
          lVar10 = *plVar15;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917b378) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_044adb7c;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b378,0);
LAB_044adb7c:
          iVar5 = (*(code *)*puVar7)(plVar15,puVar7[1]);
          if (iVar5 <= iVar4) {
            if (*(long *)(param_4 + 200) != 0) {
              FUN_06f533d0(*(long *)(param_4 + 200),*(undefined8 *)(param_5 + 0x10),lVar9,
                           DAT_0919e378);
              return;
            }
            break;
          }
          plVar15 = *(long **)(param_5 + 0x40);
          if (plVar15 == (long *)0x0) break;
          lVar10 = *plVar15;
          uVar6 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917b510) {
                puVar7 = (undefined8 *)(lVar10 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_044adbec;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b510,0);
LAB_044adbec:
          iVar5 = (*(code *)*puVar7)(plVar15,iVar4,puVar7[1]);
          uVar16 = *(undefined8 *)(param_4 + 0x268);
          uVar14 = UnityEngine_Component__get_transform(param_4,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          lVar10 = FUN_04c35338(uVar16,uVar14,DAT_091d4b80);
          if ((lVar10 == 0) || (lVar8 = UnityEngine_Component__get_gameObject(lVar10,0), lVar8 == 0)
             ) break;
          UnityEngine_GameObject__SetActive(lVar8,1,0);
          lVar8 = *(long *)(param_4 + 0x270);
          if ((lVar8 == 0) || (*(long *)(lVar8 + 0x18) == 0)) {
            uVar14 = 0;
          }
          else {
            uVar2 = iVar5 - 1;
            uVar12 = (uint)*(long *)(lVar8 + 0x18);
            uVar3 = uVar12 - 1;
            uVar1 = uVar2;
            if ((int)uVar3 <= (int)uVar2) {
              uVar1 = uVar3;
            }
            uVar3 = 0;
            if (-1 < (int)uVar2) {
              uVar3 = uVar1;
            }
            if (uVar12 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar14 = *(undefined8 *)(lVar8 + (long)(int)uVar3 * 8 + 0x20);
          }
          CookOrder_Cooking_Implement_CookingKeyVisual__Init(lVar10,iVar5,uVar14,0);
          if (param_6 == 0) break;
          uVar14 = *(undefined8 *)(param_6 + 0x50);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = UnityEngine_Object__op_Implicit(uVar14,0);
          if ((uVar6 & 1) == 0) {
            uVar14 = UnityEngine_Component__get_transform(param_6,0);
          }
          else {
            uVar14 = *(undefined8 *)(param_6 + 0x50);
          }
          CookOrder_Cooking_Implement_CookingKeyVisual__SetAnchor(lVar10,uVar14,0);
          lVar8 = UnityEngine_Component__get_transform(lVar10,0);
          if (lVar8 == 0) break;
          fVar17 = (float)UnityEngine_Transform__get_localPosition(lVar8,0);
          plVar15 = *(long **)(param_5 + 0x40);
          if (plVar15 == (long *)0x0) break;
          lVar11 = *plVar15;
          uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar6 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == DAT_0917b378) {
                puVar7 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                goto LAB_044add78;
              }
              uVar6 = uVar6 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(plVar15,DAT_0917b378,0);
LAB_044add78:
          iVar5 = (*(code *)*puVar7)(plVar15,puVar7[1]);
          param_3 = param_3 + 0.0;
          param_2 = param_2 + 0.0;
          UnityEngine_Transform__set_localPosition
                    (fVar17 + ((float)iVar4 + (float)(iVar5 + -1) * -0.5) * 0.14,param_2,param_3,
                     lVar8,0);
          lVar8 = DAT_091abf78;
          if (lVar9 == 0) break;
          lVar11 = *(long *)(lVar9 + 0x10);
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar11 == 0) break;
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            plVar15 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
            *plVar15 = lVar10;
            thunk_FUN_03f5d7b8(plVar15,lVar10);
          }
          else {
            FUN_057e0c68(lVar9,lVar10,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          plVar15 = *(long **)(param_5 + 0x40);
          iVar4 = iVar4 + 1;
          if (plVar15 == (long *)0x0) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

