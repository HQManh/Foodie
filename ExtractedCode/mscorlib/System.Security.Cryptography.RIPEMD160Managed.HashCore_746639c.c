// rea decompile_all
// name: System.Security.Cryptography.RIPEMD160Managed$$_HashData
// address: 0x746639c
// body: available
// range: 0x746639c-0x746639f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Security_Cryptography_RIPEMD160Managed___HashData
               (long param_1,undefined8 param_2,int param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  uVar2 = *(ulong *)(param_1 + 0x30);
  lVar5 = *(long *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x30) = uVar2 + (long)(int)param_4;
  if (lVar5 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(int *)(lVar5 + 0x18) != 0) {
      lVar8 = lVar5 + 0x20;
    }
  }
  lVar5 = *(long *)(param_1 + 0x28);
  uVar9 = (uint)uVar2 & 0x3f;
  if (lVar5 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(int *)(lVar5 + 0x18) != 0) {
      lVar10 = lVar5 + 0x20;
    }
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (lVar6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(int *)(lVar6 + 0x18) != 0) {
      lVar4 = lVar6 + 0x20;
    }
  }
  if (((uVar2 & 0x3f) != 0) && (0x3f < (int)(uVar9 + param_4))) {
    iVar3 = 0x40 - uVar9;
    thunk_FUN_03f6c31c(param_2,param_3,lVar5,uVar9,iVar3,0);
    param_3 = iVar3 + param_3;
    param_4 = param_4 - iVar3;
    System_Security_Cryptography_RIPEMD160Managed__MDTransform(lVar4,lVar8,lVar10);
    uVar9 = 0;
  }
  uVar7 = param_4;
  if (0x3f < (int)param_4) {
    do {
      thunk_FUN_03f6c31c(param_2,param_3,*(undefined8 *)(param_1 + 0x28),0,0x40,0);
      param_3 = param_3 + 0x40;
      param_4 = uVar7 - 0x40;
      System_Security_Cryptography_RIPEMD160Managed__MDTransform(lVar4,lVar8,lVar10);
      bVar1 = 0x7f < uVar7;
      uVar7 = param_4;
    } while (bVar1);
  }
  if ((int)param_4 < 1) {
    return;
  }
  thunk_FUN_03f6c31c(param_2,param_3,*(undefined8 *)(param_1 + 0x28),uVar9,param_4,0);
  return;
}

