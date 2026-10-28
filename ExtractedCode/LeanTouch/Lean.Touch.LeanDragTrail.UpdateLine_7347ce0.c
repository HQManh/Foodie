// rea decompile_all
// name: Lean.Touch.LeanDragTrail$$UpdateLine
// address: 0x7347ce0
// body: available
// range: 0x7347ce0-0x7347ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7347e14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7347ec8 to 0x8606acc UnityEngine.LineRenderer$$set_endColor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanDragTrail__UpdateLine(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  
  if ((DAT_095206eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091876f0);
    FUN_03f5c2a4(&DAT_091ae200);
    FUN_03f5c2a4(&DAT_091ae208);
    DAT_095206eb = 1;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x58);
  uVar15 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = *(undefined4 *)(param_1 + 0x60);
  fVar16 = *(float *)(param_1 + 100);
  uVar11 = *(undefined4 *)(param_1 + 0x68);
  uVar13 = *(undefined4 *)(param_1 + 0x6c);
  uVar14 = *(undefined4 *)(param_1 + 0x70);
  fVar12 = *(float *)(param_1 + 0x74);
  if (param_3 == 0) {
    if (param_2 != 0) {
      fVar9 = *(float *)(param_2 + 0x20);
      fVar5 = (float)UnityEngine_Time__get_deltaTime(0);
      fVar7 = *(float *)(param_1 + 0x54);
      fVar9 = fVar9 + fVar5;
      *(float *)(param_2 + 0x20) = fVar9;
      if (fVar7 == 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar7 = (fVar9 - fVar7) / (0.0 - fVar7);
        fVar9 = 1.0;
        if (fVar7 <= 1.0) {
          fVar9 = fVar7;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar7) {
          fVar5 = fVar9;
        }
      }
      fVar16 = fVar16 * fVar5;
      fVar12 = fVar12 * fVar5;
LAB_07347e70:
      if (param_4 != 0) {
        UnityEngine_LineRenderer__set_startColor(uVar6,uVar15,uVar4,fVar16,param_4,0);
        UnityEngine_LineRenderer__set_endColor(uVar11,uVar13,uVar14,fVar12,param_4,0);
        return;
      }
    }
  }
  else if ((*(long *)(param_3 + 0x48) != 0) && (param_4 != 0)) {
    UnityEngine_LineRenderer__set_positionCount
              (param_4,*(undefined4 *)(*(long *)(param_3 + 0x48) + 0x18),0);
    lVar1 = *(long *)(param_3 + 0x48);
    if (lVar1 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(lVar1 + 0x18) <= iVar3) goto LAB_07347e70;
        lVar1 = FUN_057e0998(lVar1,iVar3,DAT_091ae208);
        if (lVar1 == 0) break;
        uVar8 = *(undefined4 *)(lVar1 + 0x14);
        uVar10 = *(undefined4 *)(lVar1 + 0x18);
        uVar2 = UnityEngine_Component__get_gameObject(param_1,0);
        if (*(int *)(DAT_091876f0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091876f0);
        }
        Lean_Touch_LeanScreenDepth__Convert(uVar8,uVar10,param_1 + 0x28,uVar2,0);
        UnityEngine_LineRenderer__SetPosition(param_4,iVar3,0);
        lVar1 = *(long *)(param_3 + 0x48);
        iVar3 = iVar3 + 1;
      } while (lVar1 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

