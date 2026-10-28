// rea decompile_all
// name: FUN_03f88e48
// address: 0x3f88e48
// body: available
// range: 0x3f88e48-0x3f88f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03f88e48(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  plVar5 = (long *)FUN_03f89254(param_1 + 0x48);
  *plVar5 = param_2;
  plVar5[1] = param_1;
  iVar2 = FUN_0404bea0(0,param_1 + 8);
  if (iVar2 == 2) {
    FUN_03fe0300(param_1 + 8,1,0);
  }
  uVar3 = FUN_03f88fb0(param_2,param_3);
  uVar6 = 0;
  do {
    iVar2 = (int)uVar6;
    uVar6 = FUN_0404bd00(uVar6,iVar2 + 1,param_1 + 8);
    iVar4 = (int)uVar6;
    if (iVar4 == iVar2) break;
  } while (iVar4 != 2);
  while (iVar4 != 0) {
    FUN_03fe02a8(param_1 + 8,2,0xffffffff);
    iVar4 = FUN_0404be70(2,param_1 + 8);
  }
  uVar7 = *(ulong *)(param_1 + 0x50);
  if ((uVar7 & 0xfffffffffffffff) != 0) {
    lVar8 = uVar7 << 4;
    plVar5 = *(long **)(param_1 + 0x48);
    do {
      if (*plVar5 == param_2) {
        *(ulong *)(param_1 + 0x50) = uVar7 - 1;
        plVar1 = *(long **)(param_1 + 0x48) + (uVar7 - 1) * 2;
        lVar8 = *plVar1;
        plVar5[1] = plVar1[1];
        *plVar5 = lVar8;
        break;
      }
      lVar8 = lVar8 + -0x10;
      plVar5 = plVar5 + 2;
    } while (lVar8 != 0);
  }
  return uVar3 & 1;
}

