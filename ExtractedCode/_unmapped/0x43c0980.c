// rea decompile_all
// name: FUN_043c0980
// address: 0x43c0980
// body: available
// range: 0x43c0980-0x43c0c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_043c0980(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 uint param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (DAT_09517b81 == '\0') {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517b81 = '\x01';
  }
  if ((param_6 & 1) == 0) {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517b83 == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b83 = '\x01';
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar2 = *param_5;
    if (fVar2 < param_3 + param_1) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar2 = *param_5;
      }
      if (param_1 < fVar2 + param_5[2]) {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar2 = param_5[1];
        if (fVar2 < param_4 + param_2) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
            fVar2 = param_5[1];
          }
          return param_2 < fVar2 + param_5[3];
        }
      }
    }
  }
  else {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09517b82 == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b82 = '\x01';
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
      bVar1 = DAT_09517b82 == '\0';
    }
    else {
      bVar1 = false;
    }
    param_3 = param_3 + param_1;
    param_4 = param_4 + param_2;
    fVar2 = param_1;
    if (param_3 <= param_1) {
      fVar2 = param_3;
    }
    if (param_1 <= param_3) {
      param_1 = param_3;
    }
    fVar7 = param_2;
    if (param_4 <= param_2) {
      fVar7 = param_4;
    }
    if (param_2 <= param_4) {
      param_2 = param_4;
    }
    if (bVar1) {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b82 = '\x01';
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar3 = *param_5;
    fVar6 = param_5[1];
    fVar4 = param_5[2] + fVar3;
    fVar5 = param_5[3] + fVar6;
    fVar8 = fVar3;
    if (fVar4 <= fVar3) {
      fVar8 = fVar4;
    }
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = fVar6;
    if (fVar5 <= fVar6) {
      fVar4 = fVar5;
    }
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
    if (DAT_09517b83 == '\0') {
      FUN_03f5c2a4(&DAT_09189c30);
      DAT_09517b83 = '\x01';
    }
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (fVar8 < fVar2 + (param_1 - fVar2)) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (fVar2 < fVar8 + (fVar3 - fVar8)) {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (fVar4 < fVar7 + (param_2 - fVar7)) {
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          fVar4 = fVar4 + (fVar6 - fVar4);
          if (NAN(fVar7) || NAN(fVar4)) {
            return false;
          }
          return fVar7 < fVar4;
        }
      }
    }
  }
  return false;
}

