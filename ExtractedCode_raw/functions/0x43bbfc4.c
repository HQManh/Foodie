// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$GatherSubMeshes
// address: 0x43bbfc4
// body: available
// range: 0x43bbfc4-0x43bc327 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bc320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bc324 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__GatherSubMeshes(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if ((DAT_09517b62 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5878);
    FUN_03f5c2a4(&DAT_09184608);
    FUN_03f5c2a4(&DAT_091b0a98);
    FUN_03f5c2a4(&DAT_091b0aa0);
    FUN_03f5c2a4(&DAT_091b0ab0);
    FUN_03f5c2a4(&DAT_091b0ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b62 = 1;
  }
  if (*(int *)(DAT_09184608 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04a6ada0(param_1,0,**(undefined8 **)(DAT_09184608 + 0xb8),DAT_091c5878);
  if (((*(long *)(param_1 + 0x30) != 0) &&
      (lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar3 != 0)) &&
     (*(long *)(param_1 + 0x30) != 0)) {
    uVar8 = *(uint *)(lVar3 + 0x34);
    lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0);
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x60) != 0) {
        if (((*(long *)(param_1 + 0x30) == 0) ||
            (lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar3 == 0)) ||
           (*(long *)(lVar3 + 0x60) == 0)) goto LAB_043bc320;
        uVar1 = *(uint *)(*(long *)(lVar3 + 0x60) + 0x18);
        if ((int)uVar1 <= (int)uVar8) {
          uVar8 = uVar1;
        }
      }
      lVar3 = *(long *)(param_1 + 0x38);
      if (lVar3 != 0) {
        iVar9 = *(int *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar9) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar9,0);
          lVar3 = *(long *)(param_1 + 0x38);
          if (lVar3 == 0) goto LAB_043bc320;
        }
        lVar2 = DAT_091b0a98;
        lVar6 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = 0;
            thunk_FUN_03f5d7b8(puVar7,0);
          }
          else {
            FUN_057e0c68(lVar3,0,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if (1 < (int)uVar8) {
            uVar11 = 1;
            do {
              if (((*(long *)(param_1 + 0x30) == 0) ||
                  (lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar3 == 0))
                 || (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) goto LAB_043bc320;
              if (*(uint *)(lVar3 + 0x18) <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              iVar9 = 0;
              uVar10 = *(undefined8 *)(lVar3 + uVar11 * 0x50 + 0x20);
              while( true ) {
                if (*(int *)(DAT_09184608 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar3 = **(long **)(DAT_09184608 + 0xb8);
                if (lVar3 == 0) goto LAB_043bc320;
                if (*(int *)(lVar3 + 0x18) <= iVar9) goto LAB_043bc2f8;
                if (*(int *)(DAT_09184608 + 0xe4) == 0) {
                  FUN_03f5c424();
                  lVar3 = **(long **)(DAT_09184608 + 0xb8);
                  if (lVar3 == 0) goto LAB_043bc320;
                }
                lVar3 = FUN_057e0998(lVar3,iVar9,DAT_091b0ab8);
                if (lVar3 == 0) goto LAB_043bc320;
                uVar4 = TMPro_TMP_SubMeshUI__get_mesh(lVar3,0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar5 = UnityEngine_Object__op_Equality(uVar4,uVar10,0);
                if ((uVar5 & 1) != 0) break;
                iVar9 = iVar9 + 1;
              }
              lVar3 = *(long *)(param_1 + 0x38);
              if (*(int *)(DAT_09184608 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if ((**(long **)(DAT_09184608 + 0xb8) == 0) ||
                 (uVar10 = FUN_057e0998(**(long **)(DAT_09184608 + 0xb8),iVar9,DAT_091b0ab8),
                 lVar2 = DAT_091b0a98, lVar3 == 0)) goto LAB_043bc320;
              lVar6 = *(long *)(lVar3 + 0x10);
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar6 == 0) goto LAB_043bc320;
              uVar1 = *(uint *)(lVar3 + 0x18);
              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                thunk_FUN_03f5d7b8();
              }
              else {
                FUN_057e0c68(lVar3,uVar10,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              }
LAB_043bc2f8:
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar8);
          }
          return;
        }
      }
    }
  }
LAB_043bc320:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

