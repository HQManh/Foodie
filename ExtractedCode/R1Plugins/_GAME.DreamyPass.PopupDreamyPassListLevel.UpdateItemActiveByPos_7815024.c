// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassListLevel$$UpdateItemActiveByPos
// address: 0x7815024
// body: available
// range: 0x7815024-0x7815027 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassListLevel__UpdateItemActiveByPos
               (undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_0952327f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0952327f = 1;
  }
  iVar3 = _GAME_DreamyPass_PopupDreamyPassListLevel__get_RowCount();
  if (iVar3 != 0) {
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar6,0,0);
    if ((uVar5 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_3 + 0x40);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(long *)(param_3 + 0x38) != 0) {
          lVar7 = *(long *)(param_3 + 0x28);
          UnityEngine_Transform__get_position(*(long *)(param_3 + 0x38),0);
          if (lVar7 != 0) {
            UnityEngine_Transform__InverseTransformPoint(lVar7,0);
            if (*(long *)(param_3 + 0x40) != 0) {
              lVar7 = *(long *)(param_3 + 0x28);
              fVar9 = param_2;
              UnityEngine_Transform__get_position(*(long *)(param_3 + 0x40),0);
              if (lVar7 != 0) {
                UnityEngine_Transform__InverseTransformPoint(lVar7,0);
                fVar10 = param_2;
                if (fVar9 <= param_2) {
                  fVar10 = fVar9;
                  fVar9 = param_2;
                }
                if (DAT_095163ce == '\0') {
                  FUN_03f5c2a4(&DAT_09187e80);
                  DAT_095163ce = '\x01';
                }
                fVar9 = (-335.0 - fVar9) / 325.0 + -0.5;
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar8 = (uint)fVar9;
                if (DAT_09516626 == '\0') {
                  FUN_03f5c2a4(&DAT_09187e80);
                  DAT_09516626 = '\x01';
                }
                fVar10 = (-335.0 - fVar10) / 325.0 + -0.5;
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar3 = -0x80000000;
                if ((float)(int)fVar10 != INFINITY) {
                  iVar3 = (int)fVar10;
                }
                uVar1 = 0;
                if ((float)(int)fVar9 != INFINITY) {
                  uVar1 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
                }
                iVar4 = _GAME_DreamyPass_PopupDreamyPassListLevel__get_RowCount();
                if (iVar4 + -1 <= iVar3) {
                  iVar3 = iVar4 + -1;
                }
                uVar8 = *(uint *)(param_3 + 0x70);
                iVar4 = *(int *)(param_3 + 0x74);
                if (iVar3 < (int)uVar1) {
                  iVar3 = -1;
                  uVar1 = 0;
                }
                if (uVar1 == uVar8 && iVar3 == iVar4) {
                  return;
                }
                for (; uVar2 = uVar1, (int)uVar8 <= iVar4; uVar8 = uVar8 + 1) {
                  if (((int)uVar8 < (int)uVar1) || (iVar3 < (int)uVar8)) {
                    _GAME_DreamyPass_PopupDreamyPassListLevel__Unbind(param_3,uVar8);
                    iVar4 = *(int *)(param_3 + 0x74);
                  }
                }
                for (; (int)uVar2 <= iVar3; uVar2 = uVar2 + 1) {
                  if (((int)uVar2 < *(int *)(param_3 + 0x70)) ||
                     (*(int *)(param_3 + 0x74) < (int)uVar2)) {
                    _GAME_DreamyPass_PopupDreamyPassListLevel__Bind(param_3,uVar2);
                  }
                }
                *(uint *)(param_3 + 0x70) = uVar1;
                *(int *)(param_3 + 0x74) = iVar3;
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}

