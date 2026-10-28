// rea decompile_all
// name: FUN_043b2fc4
// address: 0x43b2fc4
// body: available
// range: 0x43b2fc4-0x43b32b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_043b2fc4(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double local_8;
  
  fVar3 = 1.0;
  if (param_1 <= 1.0) {
    fVar3 = param_1;
  }
  fVar7 = 0.0;
  if (0.0 <= param_1) {
    fVar7 = fVar3 * 255.0;
  }
  dVar1 = modf((double)fVar7,&local_8);
  if (0.0 <= fVar7) {
    if (dVar1 == 0.5) {
      fVar3 = 1.0;
      goto LAB_043b3044;
    }
    fVar7 = (float)(int)(fVar7 + 0.5);
  }
  else if (dVar1 == -0.5) {
    fVar3 = -1.0;
LAB_043b3044:
    fVar7 = (float)local_8;
    if (((long)local_8 & 1U) != 0) {
      fVar7 = (float)local_8 + fVar3;
    }
  }
  else {
    fVar7 = (float)(int)(fVar7 + -0.5);
  }
  fVar3 = 1.0;
  if (param_2 <= 1.0) {
    fVar3 = param_2;
  }
  fVar6 = 0.0;
  if (0.0 <= param_2) {
    fVar6 = fVar3 * 255.0;
  }
  dVar1 = modf((double)fVar6,&local_8);
  if (0.0 <= fVar6) {
    if (dVar1 == 0.5) {
      fVar3 = 1.0;
      goto LAB_043b30dc;
    }
    fVar6 = (float)(int)(fVar6 + 0.5);
  }
  else if (dVar1 == -0.5) {
    fVar3 = -1.0;
LAB_043b30dc:
    fVar6 = (float)local_8;
    if (((long)local_8 & 1U) != 0) {
      fVar6 = (float)local_8 + fVar3;
    }
  }
  else {
    fVar6 = (float)(int)(fVar6 + -0.5);
  }
  fVar3 = 1.0;
  if (param_3 <= 1.0) {
    fVar3 = param_3;
  }
  fVar5 = 0.0;
  if (0.0 <= param_3) {
    fVar5 = fVar3 * 255.0;
  }
  dVar1 = modf((double)fVar5,&local_8);
  if (0.0 <= fVar5) {
    if (dVar1 == 0.5) {
      fVar3 = 1.0;
      goto LAB_043b3178;
    }
    fVar5 = (float)(int)(fVar5 + 0.5);
  }
  else if (dVar1 == -0.5) {
    fVar3 = -1.0;
LAB_043b3178:
    fVar5 = (float)local_8;
    if (((long)local_8 & 1U) != 0) {
      fVar5 = (float)local_8 + fVar3;
    }
  }
  else {
    fVar5 = (float)(int)(fVar5 + -0.5);
  }
  fVar3 = 1.0;
  if (param_4 <= 1.0) {
    fVar3 = param_4;
  }
  fVar4 = 0.0;
  if (0.0 <= param_4) {
    fVar4 = fVar3 * 255.0;
  }
  dVar1 = modf((double)fVar4,&local_8);
  if (0.0 <= fVar4) {
    if (dVar1 != 0.5) {
      fVar3 = (float)(int)(fVar4 + 0.5);
      goto LAB_043b3248;
    }
    fVar4 = 1.0;
  }
  else {
    if (dVar1 != -0.5) {
      fVar3 = (float)(int)(fVar4 + -0.5);
      goto LAB_043b3248;
    }
    fVar4 = -1.0;
  }
  fVar3 = (float)local_8;
  if (((long)local_8 & 1U) != 0) {
    fVar3 = (float)local_8 + fVar4;
  }
LAB_043b3248:
  uVar2 = NEON_ushl(CONCAT44((int)fVar6,(int)fVar5),0x800000010,4);
  return (uint)(uVar2 & 0xff0000ff0000) | (int)fVar3 << 0x18 | (int)fVar7 & 0xffU |
         (uint)((uVar2 & 0xff0000ff0000) >> 0x20);
}

