// rea decompile_all
// name: TrungKienPack.Particle.Footprint.FootprintEffect$$Update
// address: 0x4092338
// body: available
// range: 0x4092338-0x40923fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40923f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_Footprint_FootprintEffect__Update
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  char cVar1;
  long lVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 local_18;
  
  local_18 = 0;
  if (*(char *)(param_4 + 0x40) != '\0') {
    cVar1 = *(char *)(param_4 + 0x50);
    lVar2 = TrungKienPack_PoolingElement__get_TF(param_4,0);
    if (cVar1 == '\0') {
      if (lVar2 == 0) goto LAB_040923f8;
      uVar4 = UnityEngine_Transform__get_position(lVar2,0);
      *(undefined4 *)(param_4 + 0x44) = uVar4;
      *(float *)(param_4 + 0x48) = param_2;
      *(undefined4 *)(param_4 + 0x4c) = param_3;
      *(undefined1 *)(param_4 + 0x50) = 1;
    }
    else {
      if (lVar2 == 0) {
LAB_040923f8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar3 = (float)UnityEngine_Transform__get_position(lVar2,0);
      fVar3 = fVar3 - *(float *)(param_4 + 0x44);
      param_2 = param_2 - *(float *)(param_4 + 0x48);
      local_18 = CONCAT44(param_2,fVar3);
      fVar3 = fVar3 * fVar3 + param_2 * param_2;
      if (*(float *)(param_4 + 0x3c) * *(float *)(param_4 + 0x3c) <= fVar3) {
        UnityEngine_Vector2__Normalize(&local_18,0);
        TrungKienPack_Particle_Footprint_FootprintEffect__EmitFootprint(param_4);
        lVar2 = TrungKienPack_PoolingElement__get_TF(param_4,0);
        if (lVar2 == 0) goto LAB_040923f8;
        uVar4 = UnityEngine_Transform__get_position(lVar2,0);
        *(undefined4 *)(param_4 + 0x44) = uVar4;
        *(float *)(param_4 + 0x48) = param_2;
        *(float *)(param_4 + 0x4c) = fVar3;
      }
    }
  }
  return;
}

