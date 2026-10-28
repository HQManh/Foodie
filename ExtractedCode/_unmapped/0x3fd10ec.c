// rea decompile_all
// name: FUN_03fd10ec
// address: 0x3fd10ec
// body: available
// range: 0x3fd10ec-0x3fd12b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fd10ec(ulong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  ulong uVar5;
  
  if (DAT_097485e8 != 0) {
    FUN_03fd0620();
  }
  FUN_03fd0510();
  if ((param_1 < 0x800) || (lVar4 = (long)DAT_09515628, param_1 <= 0x800U - lVar4)) {
    if ((DAT_097480e0 != 0) && (iVar1 = FUN_0404be40(1,&DAT_097480e8), iVar1 != 0)) {
      FUN_03fcbfa4();
    }
    puVar3 = (undefined8 *)FUN_03fcc3a4(param_1,param_2);
    if (DAT_097480e0 != 0) {
      DAT_097480e8 = 0;
    }
  }
  else {
    uVar5 = param_1 + lVar4 + 0xf >> 4;
    if (-lVar4 - 0x10U <= param_1) {
      uVar5 = 0xfffffffffffffff;
    }
    lVar4 = uVar5 * 0x10;
    iVar1 = *(int *)(&DAT_095156fc + (long)param_2 * 0x20);
    if ((DAT_097480e0 != 0) && (iVar2 = FUN_0404be40(1,&DAT_097480e8), iVar2 != 0)) {
      FUN_03fcbfa4();
    }
    puVar3 = (undefined8 *)FUN_03fd3028(lVar4,param_2,0);
    if (puVar3 != (undefined8 *)0x0) {
      if (DAT_097480f4 == 0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[uVar5 * 2 + -2] = 0;
        puVar3[uVar5 * 2 + -1] = 0;
      }
      else {
        memset(puVar3,0,lVar4 + 0xfffU & 0xfffffffffffff000);
      }
      DAT_09535c28 = DAT_09535c28 + lVar4;
    }
    if (DAT_097480e0 != 0) {
      DAT_097480e8 = 0;
    }
    if (((puVar3 != (undefined8 *)0x0) && (iVar1 != 0)) && (DAT_097480f4 == 0)) {
      memset(puVar3,0,lVar4 + 0xfffU & 0xfffffffffffff000);
      return puVar3;
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    return puVar3;
  }
  UNRECOVERED_JUMPTABLE = (code *)FUN_03fd32b4();
                    /* WARNING: Could not recover jumptable at 0x03fd11a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)(*UNRECOVERED_JUMPTABLE)(param_1);
  return puVar3;
}

