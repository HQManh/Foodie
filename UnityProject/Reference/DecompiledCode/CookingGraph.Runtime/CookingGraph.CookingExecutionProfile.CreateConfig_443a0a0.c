// rea decompile_all
// name: CookingGraph.CookingExecutionProfile$$CreateConfig
// address: 0x443a0a0
// body: available
// range: 0x443a0a0-0x443a27f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingExecutionProfile__CreateConfig(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined8 uVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  if ((DAT_09517fe3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182d58);
    FUN_03f5c2a4(&DAT_091b6d48);
    DAT_09517fe3 = 1;
  }
  cVar2 = *(char *)(param_1 + 0x38);
  cVar3 = *(char *)(param_1 + 0x20);
  cVar4 = *(char *)(param_1 + 0x21);
  fVar17 = *(float *)(param_1 + 0x18);
  fVar18 = *(float *)(param_1 + 0x2c);
  cVar5 = *(char *)(param_1 + 0x30);
  cVar6 = *(char *)(param_1 + 0x31);
  cVar7 = *(char *)(param_1 + 0x32);
  cVar8 = *(char *)(param_1 + 0x22);
  cVar9 = *(char *)(param_1 + 0x23);
  if (*(char *)(param_1 + 0x24) == '\0') {
    local_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    local_a0 = 0;
    uStack_98 = 0;
    FUN_05c2dd28((double)*(float *)(param_1 + 0x28),&local_a0,DAT_091b6d48);
    local_b0 = uStack_98;
    uStack_a8 = local_a0;
  }
  fVar15 = *(float *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x33) == '\0') {
    dVar16 = 0.0;
  }
  else {
    dVar16 = (double)*(float *)(param_1 + 0x34);
  }
  fVar19 = *(float *)(param_1 + 0x3c);
  fVar20 = *(float *)(param_1 + 0x40);
  uVar10 = *(undefined1 *)(param_1 + 0x44);
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  uVar11 = *(undefined1 *)(param_1 + 0x4c);
  uVar12 = *(undefined1 *)(param_1 + 0x4d);
  uVar13 = *(undefined1 *)(param_1 + 0x4e);
  uVar14 = thunk_FUN_03f9944c(DAT_09182d58);
  CookingGraph_Execution_CookingExecutionConfig___ctor
            ((double)fVar17,(double)fVar18,(double)fVar15,dVar16,(double)fVar19,(double)fVar20,
             uVar14,cVar2 != '\0',cVar3 != '\0',cVar4 != '\0',cVar5 != '\0',cVar6 != '\0',
             cVar7 != '\0',cVar8 != '\0',cVar9 != '\0',uStack_a8,local_b0,uVar10,uVar1,uVar11,uVar12
             ,uVar13,0);
  return uVar14;
}

