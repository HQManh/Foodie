// rea decompile_all
// name: FUN_03f88d68
// address: 0x3f88d68
// body: available
// range: 0x3f88d68-0x3f88e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f88d68(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  plVar4 = (long *)FUN_03f89254(param_1 + 0x48);
  *plVar4 = param_2;
  plVar4[1] = param_1;
  iVar2 = FUN_0404bea0(0,param_1 + 8);
  if (iVar2 == 2) {
    FUN_03fe0300(param_1 + 8,1,0);
  }
  FUN_03f88f40(param_2);
  uVar5 = 0;
  do {
    iVar2 = (int)uVar5;
    uVar5 = FUN_0404bd00(uVar5,iVar2 + 1,param_1 + 8);
    iVar3 = (int)uVar5;
    if (iVar3 == iVar2) break;
  } while (iVar3 != 2);
  while (iVar3 != 0) {
    FUN_03fe02a8(param_1 + 8,2,0xffffffff);
    iVar3 = FUN_0404be70(2,param_1 + 8);
  }
  uVar6 = *(ulong *)(param_1 + 0x50);
  if ((uVar6 & 0xfffffffffffffff) != 0) {
    lVar7 = uVar6 << 4;
    plVar4 = *(long **)(param_1 + 0x48);
    do {
      if (*plVar4 == param_2) {
        *(ulong *)(param_1 + 0x50) = uVar6 - 1;
        plVar1 = *(long **)(param_1 + 0x48) + (uVar6 - 1) * 2;
        lVar7 = *plVar1;
        plVar4[1] = plVar1[1];
        *plVar4 = lVar7;
        return;
      }
      lVar7 = lVar7 + -0x10;
      plVar4 = plVar4 + 2;
    } while (lVar7 != 0);
  }
  return;
}

