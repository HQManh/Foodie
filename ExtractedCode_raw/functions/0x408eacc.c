// rea decompile_all
// name: TrungKienPack.Particle.RandomPositionInSquare$$Spawn
// address: 0x408eacc
// body: available
// range: 0x408eacc-0x408ec77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x408ec50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void TrungKienPack_Particle_RandomPositionInSquare__Spawn(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_80;
  float local_78;
  
  if ((DAT_09515ce5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b10a8);
    FUN_03f5c2a4(&DAT_091b10b0);
    DAT_09515ce5 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar3) {
        return;
      }
      lVar1 = FUN_057e0998(lVar1,iVar3,DAT_091b10b0);
      uVar4 = UnityEngine_Random__Range
                        (*(float *)(param_1 + 0x28) * -0.5,*(float *)(param_1 + 0x28) * 0.5,0);
      uVar5 = UnityEngine_Random__Range
                        (*(float *)(param_1 + 0x2c) * -0.5,*(float *)(param_1 + 0x2c) * 0.5,0);
      if (lVar1 == 0) break;
      UnityEngine_Transform__set_localPosition(uVar4,uVar5,0,lVar1,0);
      fVar6 = (float)UnityEngine_Random__Range
                               (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (fVar6 * *(float *)(lVar2 + 0xc),fVar6 * *(float *)(lVar2 + 0x10),
                 fVar6 * *(float *)(lVar2 + 0x14),lVar1,0);
      if (*(char *)(param_1 + 0x38) != '\0') {
        local_78 = (float)UnityEngine_Random__Range(0,0x43b40000,0);
        local_78 = local_78 * 0.017453292;
        local_80 = 0;
        UnityEngine_Quaternion__Internal_FromEulerRad(&local_80,0);
        UnityEngine_Transform__set_localRotation(lVar1,0);
      }
      lVar1 = *(long *)(param_1 + 0x20);
      iVar3 = iVar3 + 1;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

