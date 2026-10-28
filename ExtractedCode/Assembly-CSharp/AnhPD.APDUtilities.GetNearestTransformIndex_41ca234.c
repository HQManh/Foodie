// rea decompile_all
// name: AnhPD.APDUtilities$$GetNearestTransformIndex
// address: 0x41ca234
// body: available
// range: 0x41ca234-0x41ca40f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ca40c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_APDUtilities__GetNearestTransformIndex
              (undefined1 param_1 [16],float param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_095169f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    DAT_095169f8 = 1;
  }
  if (param_4 != 0) {
    if (*(int *)(param_4 + 0x18) < 1) {
      return -1;
    }
    if (param_3 != 0) {
      fVar5 = (float)UnityEngine_Transform__get_position(param_3,0);
      fVar9 = param_2;
      lVar2 = FUN_057e0998(param_4,0,DAT_091b10b0);
      if (lVar2 != 0) {
        fVar6 = (float)UnityEngine_Transform__get_position(lVar2,0);
        if (DAT_09515fab == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09515fab = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(int *)(param_4 + 0x18) < 2) {
          return 0;
        }
        iVar4 = 1;
        fVar8 = (param_2 - fVar9) * (param_2 - fVar9);
        fVar9 = SQRT((fVar5 - fVar6) * (fVar5 - fVar6) + fVar8);
        iVar3 = 0;
        while( true ) {
          fVar6 = (float)UnityEngine_Transform__get_position(param_3,0);
          fVar5 = fVar8;
          lVar2 = FUN_057e0998(param_4,iVar4,DAT_091b10b0);
          if (lVar2 == 0) break;
          fVar7 = (float)UnityEngine_Transform__get_position(lVar2,0);
          if (DAT_09515fab == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09515fab = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar5 = fVar8 - fVar5;
          fVar8 = (fVar6 - fVar7) * (fVar6 - fVar7);
          fVar5 = SQRT(fVar8 + fVar5 * fVar5);
          iVar1 = iVar4;
          if (fVar9 <= fVar5) {
            iVar1 = iVar3;
            fVar5 = fVar9;
          }
          fVar9 = fVar5;
          iVar4 = iVar4 + 1;
          iVar3 = iVar1;
          if (*(int *)(param_4 + 0x18) <= iVar4) {
            return iVar1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

