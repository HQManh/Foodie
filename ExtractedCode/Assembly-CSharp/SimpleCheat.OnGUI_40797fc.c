// rea decompile_all
// name: SimpleCheat$$OnGUI
// address: 0x40797fc
// body: available
// range: 0x40797fc-0x4079a77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4079a74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void SimpleCheat__OnGUI(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_160 [8];
  undefined8 auStack_120 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = local_160;
  if ((DAT_09515c32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184b38);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09203d70);
    DAT_09515c32 = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_GUI__get_matrix(&local_e0,0);
    uStack_98 = uStack_d8;
    local_a0 = local_e0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    iVar1 = UnityEngine_Screen__get_width(0);
    fVar11 = 1.0;
    if (1.0 <= (float)iVar1 / 640.0) {
      fVar11 = (float)iVar1 / 640.0;
    }
    if (DAT_09515ce9 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce9 = '\x01';
    }
    puVar6 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
    fVar7 = (float)puVar6[2];
    fVar8 = (float)puVar6[3];
    if (DAT_09515ce8 == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09515ce8 = '\x01';
      puVar6 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
    }
    uVar9 = *puVar6;
    uVar10 = puVar6[1];
    if (*(int *)(DAT_09184b38 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_GUIUtility__ScaleAroundPivot(fVar11 * fVar7,fVar11 * fVar8,uVar9,uVar10,0);
    iVar1 = UnityEngine_Screen__get_width(0);
    if (*(char *)(param_1 + 0x21) == '\0') {
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_GUI__Button
                        ((float)iVar1 / fVar11 + -90.0,0x40800000,0x42ac0000,0x42080000,DAT_09203d70
                         ,0);
      if ((uVar4 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x21) = 1;
      }
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = auStack_120;
    }
    else {
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = UnityEngine_GUI__get_skin(0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = UnityEngine_GUISkin__get_box(lVar2,0);
      UnityEngine_GUILayout__BeginArea
                ((float)iVar1 / fVar11 + -300.0,0x40800000,0x43940000,0x43e60000,uVar3,0);
      SimpleCheat__DrawTuner(param_1);
      UnityEngine_GUILayout__EndArea(0);
    }
    puVar5[1] = uStack_98;
    *puVar5 = local_a0;
    puVar5[3] = uStack_88;
    puVar5[2] = uStack_90;
    puVar5[5] = uStack_78;
    puVar5[4] = local_80;
    puVar5[7] = uStack_68;
    puVar5[6] = uStack_70;
    UnityEngine_GUI__set_matrix(puVar5,0);
  }
  return;
}

