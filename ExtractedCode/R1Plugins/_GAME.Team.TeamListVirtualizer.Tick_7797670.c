// rea decompile_all
// name: _GAME.Team.TeamListVirtualizer$$Tick
// address: 0x7797670
// body: available
// range: 0x7797670-0x7797673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamListVirtualizer__Tick(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09522dcb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0c20);
    DAT_09522dcb = 1;
  }
  if ((*(long *)(param_1 + 0x38) == 0) || (*(int *)(*(long *)(param_1 + 0x38) + 0x18) == 0)) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    UnityEngine_RectTransform__GetWorldCorners(*(long *)(param_1 + 0x20),lVar5,0);
    if (lVar5 != 0) {
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
LAB_0779766c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(long *)(param_1 + 0x18) != 0) {
        fVar7 = *(float *)(lVar5 + 0x30);
        UnityEngine_Transform__InverseTransformPoint
                  (*(undefined4 *)(lVar5 + 0x2c),fVar7,*(undefined4 *)(lVar5 + 0x34),
                   *(long *)(param_1 + 0x18),0);
        if (*(int *)(lVar5 + 0x18) == 0) goto LAB_0779766c;
        if (*(long *)(param_1 + 0x18) != 0) {
          fVar7 = fVar7 + *(float *)(param_1 + 0x34);
          fVar8 = *(float *)(lVar5 + 0x24);
          UnityEngine_Transform__InverseTransformPoint
                    (*(undefined4 *)(lVar5 + 0x20),fVar8,*(undefined4 *)(lVar5 + 0x28),
                     *(long *)(param_1 + 0x18),0);
          fVar10 = *(float *)(param_1 + 0x28);
          fVar9 = *(float *)(param_1 + 0x2c);
          fVar8 = fVar8 - *(float *)(param_1 + 0x34);
          fVar11 = fVar7;
          if (fVar8 <= fVar7) {
            fVar11 = fVar8;
            fVar8 = fVar7;
          }
          if (DAT_095163ce == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_095163ce = '\x01';
          }
          fVar7 = (-fVar8 - fVar9) / fVar10 + -0.5;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar9 = *(float *)(param_1 + 0x28);
          fVar8 = *(float *)(param_1 + 0x2c);
          uVar6 = (uint)fVar7;
          if (DAT_09516626 == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09516626 = '\x01';
          }
          fVar8 = (-fVar11 - fVar8) / fVar9 + -0.5;
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar2 = -0x80000000;
          if ((float)(int)fVar8 != INFINITY) {
            iVar2 = (int)fVar8;
          }
          uVar1 = 0;
          if ((float)(int)fVar7 != INFINITY) {
            uVar1 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
          }
          if ((DAT_09522dcb & 1) == 0) {
            FUN_03f5c2a4(&DAT_091b0c20);
            DAT_09522dcb = 1;
          }
          if (*(long *)(param_1 + 0x38) == 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = *(int *)(*(long *)(param_1 + 0x38) + 0x18) + -1;
          }
          if (iVar4 <= iVar2) {
            iVar2 = iVar4;
          }
          uVar6 = *(uint *)(param_1 + 0x50);
          iVar4 = *(int *)(param_1 + 0x54);
          if (iVar2 < (int)uVar1) {
            iVar2 = -1;
            uVar1 = 0;
          }
          if (uVar1 == uVar6 && iVar2 == iVar4) {
            return;
          }
          for (; uVar3 = uVar1, (int)uVar6 <= iVar4; uVar6 = uVar6 + 1) {
            if (((int)uVar6 < (int)uVar1) || (iVar2 < (int)uVar6)) {
              _GAME_Team_TeamListVirtualizer__Unbind(param_1,uVar6);
              iVar4 = *(int *)(param_1 + 0x54);
            }
          }
          for (; (int)uVar3 <= iVar2; uVar3 = uVar3 + 1) {
            if (((int)uVar3 < *(int *)(param_1 + 0x50)) || (*(int *)(param_1 + 0x54) < (int)uVar3))
            {
              _GAME_Team_TeamListVirtualizer__Bind(param_1,uVar3);
            }
          }
          *(uint *)(param_1 + 0x50) = uVar1;
          *(int *)(param_1 + 0x54) = iVar2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

