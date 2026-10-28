// rea decompile_all
// name: AnhPD.APDUtilities$$GetNearestTransform
// address: 0x41ca030
// body: available
// range: 0x41ca030-0x41ca233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ca22c to 0x57e0998 FUN_057e0998 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ca230 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_APDUtilities__GetNearestTransform
          (undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_095169f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    DAT_095169f7 = 1;
  }
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x18) < 1) {
      return 0;
    }
    if (param_3 != 0) {
      fVar6 = (float)UnityEngine_Transform__get_position(param_3,0);
      fVar10 = param_2;
      lVar1 = FUN_057e0998(param_4,0,DAT_091b10b0);
      if (lVar1 != 0) {
        fVar7 = (float)UnityEngine_Transform__get_position(lVar1,0);
        if (DAT_09515fab == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09515fab = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(int *)(param_4 + 0x18) < 2) {
          iVar4 = 0;
        }
        else {
          iVar5 = 1;
          fVar9 = (param_2 - fVar10) * (param_2 - fVar10);
          fVar10 = SQRT((fVar6 - fVar7) * (fVar6 - fVar7) + fVar9);
          iVar3 = 0;
          do {
            fVar7 = (float)UnityEngine_Transform__get_position(param_3,0);
            fVar6 = fVar9;
            lVar1 = FUN_057e0998(param_4,iVar5,DAT_091b10b0);
            if (lVar1 == 0) goto LAB_041ca230;
            fVar8 = (float)UnityEngine_Transform__get_position(lVar1,0);
            if (DAT_09515fab == '\0') {
              FUN_03f5c2a4(&DAT_09187e80);
              DAT_09515fab = '\x01';
            }
            if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            fVar6 = fVar9 - fVar6;
            fVar9 = (fVar7 - fVar8) * (fVar7 - fVar8);
            fVar6 = SQRT(fVar9 + fVar6 * fVar6);
            iVar4 = iVar5;
            if (fVar10 <= fVar6) {
              iVar4 = iVar3;
              fVar6 = fVar10;
            }
            fVar10 = fVar6;
            iVar5 = iVar5 + 1;
            iVar3 = iVar4;
          } while (iVar5 < *(int *)(param_4 + 0x18));
        }
        uVar2 = FUN_057e0998(param_4,iVar4,DAT_091b10b0);
        return uVar2;
      }
    }
  }
LAB_041ca230:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

