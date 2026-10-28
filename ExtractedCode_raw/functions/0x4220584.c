// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveTwoColumnLayout$$Measure
// address: 0x4220584
// body: available
// range: 0x4220584-0x4220733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AdaptiveTwoColumnLayout__Measure
               (float param_1,long param_2,int param_3,int param_4,float *param_5,float *param_6,
               float *param_7,int *param_8,int *param_9)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  cVar1 = DAT_095163ce;
  fVar5 = (float)param_3;
  *param_5 = *(float *)(param_2 + 0x2c) * param_1;
  *param_6 = *(float *)(param_2 + 0x34) * param_1;
  *param_7 = *(float *)(param_2 + 0x38) * param_1;
  iVar4 = *(int *)(param_2 + 0x3c);
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  fVar6 = fVar5 / (float)iVar4;
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
    bVar2 = DAT_095163ce == '\0';
  }
  else {
    bVar2 = false;
  }
  iVar4 = -0x80000000;
  if ((float)(int)fVar6 != INFINITY) {
    iVar4 = (int)fVar6;
  }
  if (param_4 <= iVar4) {
    param_4 = iVar4;
  }
  iVar4 = param_3;
  if (param_3 < 2) {
    iVar4 = 1;
  }
  iVar3 = param_4;
  if (iVar4 <= param_4) {
    iVar3 = iVar4;
  }
  if (param_4 < 1) {
    iVar3 = 1;
  }
  if (bVar2) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_095163ce = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar4 = (int)(fVar5 / (float)iVar3);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  if ((float)(int)(fVar5 / (float)iVar3) == INFINITY) {
    iVar4 = 1;
  }
  *param_8 = iVar4;
  if (param_3 < 1) {
    iVar3 = 0;
  }
  else {
    if (DAT_095163ce == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_095163ce = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = -0x80000000;
    if ((float)(int)(fVar5 / (float)iVar4) != INFINITY) {
      iVar3 = (int)(fVar5 / (float)iVar4);
    }
  }
  *param_9 = iVar3;
  return;
}

