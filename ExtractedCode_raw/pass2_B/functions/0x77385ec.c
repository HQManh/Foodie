// rea decompile_all
// name: CakeOrder.PopupMinigame.TestObjectMinigameCook$$LateUpdate
// address: 0x77385ec
// body: available
// range: 0x77385ec-0x77388bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7738898 to 0x866c8b0 UnityEngine.Transform$$set_position (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77388bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_TestObjectMinigameCook__LateUpdate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  if ((DAT_09522aa7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09522aa7 = 1;
  }
  uVar4 = *(undefined8 *)(param_4 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if (((uVar1 & 1) == 0) && (*(char *)(param_4 + 0x20) != '\0')) {
    fVar5 = (float)CakeOrder_PopupMinigame_InputMiniScene__get_mouseWorldPos(0);
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar2 == 0) goto LAB_077388bc;
    UnityEngine_Transform__get_position(lVar2,0);
    fVar10 = param_3;
    fVar6 = (float)UnityEngine_Time__get_time(0);
    fVar12 = *(float *)(param_4 + 0x30);
    fVar13 = *(float *)(param_4 + 0x34);
    fVar11 = fVar12;
    fVar7 = (float)UnityEngine_Time__get_time(0);
    fVar14 = *(float *)(param_4 + 0x30);
    fVar15 = *(float *)(param_4 + 0x34);
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 == 0) goto LAB_077388bc;
    fVar8 = (float)UnityEngine_Transform__get_position(lVar3,0);
    fVar16 = *(float *)(param_4 + 0x38);
    fVar9 = (float)UnityEngine_Time__get_deltaTime(0);
    if (lVar2 == 0) goto LAB_077388bc;
    fVar9 = fVar16 * 50.0 * fVar9;
    fVar16 = 1.0;
    if (fVar9 <= 1.0) {
      fVar16 = fVar9;
    }
    fVar17 = 0.0;
    if (0.0 <= fVar9) {
      fVar17 = fVar16;
    }
    param_3 = fVar10 + (param_3 - fVar10) * fVar17;
    fVar10 = sinf(fVar7 * fVar15 * 0.017453292);
    param_2 = fVar11 + ((param_2 + fVar14 * fVar10) - fVar11) * fVar17;
    fVar11 = cosf(fVar6 * fVar13 * 0.017453292);
    UnityEngine_Transform__set_position
              (fVar8 + ((fVar5 + fVar12 * fVar11) - fVar8) * fVar17,param_2,lVar2,0);
  }
  if ((*(char *)(param_4 + 0x21) == '\0') || (*(char *)(param_4 + 0x60) == '\0')) {
    return;
  }
  fVar11 = (float)CakeOrder_PopupMinigame_InputMiniScene__get_mouseWorldPos(0);
  fVar6 = *(float *)(param_4 + 100);
  fVar10 = *(float *)(param_4 + 0x68);
  fVar5 = param_2;
  lVar2 = UnityEngine_Component__get_transform(param_4,0);
  if (lVar2 != 0) {
    UnityEngine_Transform__get_position(lVar2,0);
    fVar7 = param_3;
    lVar2 = UnityEngine_Component__get_transform(param_4,0);
    lVar3 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar3 != 0) {
      fVar12 = (float)UnityEngine_Transform__get_position(lVar3,0);
      fVar14 = *(float *)(param_4 + 0x38);
      fVar13 = (float)UnityEngine_Time__get_deltaTime(0);
      if (lVar2 != 0) {
        fVar13 = fVar14 * 50.0 * fVar13;
        fVar14 = 1.0;
        if (fVar13 <= 1.0) {
          fVar14 = fVar13;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar13) {
          fVar15 = fVar14;
        }
        UnityEngine_Transform__set_position
                  (fVar12 + ((fVar11 + fVar6) - fVar12) * fVar15,
                   fVar5 + ((param_2 + fVar10) - fVar5) * fVar15,fVar7 + (param_3 - fVar7) * fVar15,
                   lVar2,0);
        return;
      }
    }
  }
LAB_077388bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

