// rea decompile_all
// name: FUN_03f98248
// address: 0x3f98248
// body: available
// range: 0x3f98248-0x3f98413 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f98410 to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03f98248(long param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  FUN_03fbea4c();
  iVar3 = il2cpp_array_element_size(param_1);
  bVar2 = *(byte *)(param_1 + 0x132);
  uVar6 = (ulong)bVar2;
  if (bVar2 == 1) {
    if ((*(char *)(param_1 + 0x2a) == '\x1d') || ((param_3 != (long *)0x0 && (*param_3 == 0)))) {
      uVar11 = *param_2;
      if (uVar11 >> 0x1f != 0) {
LAB_03f98400:
        uVar5 = FUN_03fa6e80("Arithmetic operation resulted in an overflow.");
                    /* WARNING: Subroutine does not return */
        FUN_03fa5c38(uVar5,0);
      }
      lVar10 = 0;
      goto LAB_03f982e4;
    }
    lVar10 = 0x10;
  }
  else {
    lVar10 = uVar6 << 4;
    if (bVar2 == 0) {
      uVar11 = 1;
      goto LAB_03f982e4;
    }
  }
  uVar11 = 1;
  puVar7 = param_2;
  do {
    if (*puVar7 >> 0x1f != 0) goto LAB_03f98400;
    uVar11 = *puVar7 * uVar11;
    uVar6 = uVar6 - 1;
    puVar7 = puVar7 + 1;
  } while (uVar6 != 0);
LAB_03f982e4:
  uVar6 = uVar11 * (long)iVar3 + 0x27 & 0xfffffffffffffff8;
  lVar1 = uVar11 * (long)iVar3 + 0x20;
  if (lVar10 != 0) {
    lVar1 = uVar6 + lVar10;
  }
  if ((*(ushort *)(param_1 + 0x135) >> 5 & 1) == 0) {
    plVar4 = (long *)FUN_03fd12f8(lVar1);
    *plVar4 = param_1;
    plVar4[1] = 0;
    FUN_0404c020(1,&DAT_09534428);
    memset(plVar4 + 2,0,lVar1 - 0x10);
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = (long *)FUN_03fd10e4(lVar1);
      *plVar4 = param_1;
    }
    else {
      plVar4 = (long *)FUN_03fcc174(lVar1,param_1);
    }
    FUN_0404c020(1,&DAT_09534428);
  }
  plVar4[3] = uVar11;
  if (lVar10 != 0) {
    uVar11 = (ulong)*(byte *)(param_1 + 0x132);
    plVar4[2] = (long)plVar4 + uVar6;
    if (uVar11 != 0) {
      puVar8 = (undefined4 *)((long)plVar4 + uVar6 + 8);
      plVar9 = param_3;
      do {
        *(ulong *)(puVar8 + -2) = *param_2;
        if (param_3 != (long *)0x0) {
          *puVar8 = (int)*plVar9;
        }
        uVar11 = uVar11 - 1;
        plVar9 = plVar9 + 1;
        puVar8 = puVar8 + 4;
        param_2 = param_2 + 1;
      } while (uVar11 != 0);
    }
  }
  if (DAT_09535130 < '\0') {
    FUN_03fa8190(plVar4,param_1);
  }
  return plVar4;
}

