// rea decompile_all
// name: FUN_03fa788c
// address: 0x3fa788c
// body: available
// range: 0x3fa788c-0x3fa79bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fa788c(ulong *param_1,long param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  undefined8 local_38;
  
  local_38 = 0;
  lVar8 = *(long *)((*param_1 & 0xfffffffffffffffe) + 0x40);
  uVar4 = ~*(uint *)(lVar8 + 0x28) >> 0x1f;
  do {
    lVar6 = FUN_03fbec04(lVar8,&local_38);
    if (lVar6 == 0) {
      if (uVar4 == 0) {
        return;
      }
      break;
    }
    uVar3 = FUN_03fa7ba0();
    bVar1 = uVar4 == 0;
    uVar4 = 0;
  } while (bVar1 && (uVar3 & 1) == 0);
  uVar4 = FUN_03f98240(param_1);
  uVar9 = (ulong)uVar4;
  if (*(int *)(lVar8 + 0x28) < 0) {
    iVar5 = FUN_03fc1104(lVar8);
    if (uVar4 != 0) {
      cVar7 = '\0';
      param_1 = param_1 + 4;
      do {
        bVar2 = FUN_03fa79c0(param_1,1,lVar8,param_2);
        cVar7 = cVar7 + (bVar2 & 1);
        if ((*(int *)(param_2 + 0x30) < 0x80) && (cVar7 == -1)) {
          FUN_03fa763c(param_2);
        }
        uVar9 = uVar9 - 1;
        param_1 = (ulong *)((long)param_1 + (long)iVar5);
      } while (uVar9 != 0);
    }
  }
  else if (uVar4 != 0) {
    cVar7 = '\0';
    param_1 = param_1 + 4;
    do {
      bVar2 = FUN_03fa7ae4(*param_1,param_2);
      cVar7 = cVar7 + (bVar2 & 1);
      if ((*(int *)(param_2 + 0x30) < 0x80) && (cVar7 == -1)) {
        FUN_03fa763c(param_2);
      }
      uVar9 = uVar9 - 1;
      param_1 = param_1 + 1;
    } while (uVar9 != 0);
  }
  return;
}

