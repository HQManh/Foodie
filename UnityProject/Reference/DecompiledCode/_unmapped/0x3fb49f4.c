// rea decompile_all
// name: FUN_03fb49f4
// address: 0x3fb49f4
// body: available
// range: 0x3fb49f4-0x3fb4c6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fb4c6c to 0x3fa5c38 FUN_03fa5c38 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fb49f4(undefined8 *param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_38 [8];
  
  if (param_1[3] != 0) {
    return param_1[3];
  }
  puVar9 = (undefined8 *)FUN_03fc3840(*param_1);
  if (puVar9 == (undefined8 *)0x0) {
    if ((param_2 & 1) != 0) {
      uVar11 = FUN_03fa7118();
                    /* WARNING: Subroutine does not return */
      FUN_03fa5c38(uVar11,0);
    }
    lVar12 = 0;
  }
  else {
    FUN_03f5d894(auStack_38,&DAT_09535730);
    lVar12 = param_1[3];
    if (lVar12 == 0) {
      puVar10 = (undefined8 *)
                FUN_03fa7f34(1,(ulong)*(ushort *)((long)puVar9 + 0x12a) * 0x10 + 0x138);
      puVar10[0xf] = puVar10;
      uVar4 = *(undefined4 *)(puVar9 + 0x23);
      uVar14 = puVar9[3];
      uVar11 = puVar9[2];
      puVar10[0xc] = param_1;
      *(undefined4 *)(puVar10 + 0x23) = uVar4;
      puVar10[3] = uVar14;
      puVar10[2] = uVar11;
      uVar11 = *param_1;
      *puVar10 = *puVar9;
      lVar12 = FUN_03fc3840(uVar11);
      lVar13 = puVar10[0xc];
      if (*(long *)(lVar12 + 0x58) != 0) {
        uVar11 = FUN_03f76ed4(*(long *)(lVar12 + 0x58) + 0x20,lVar13 + 8,0);
        uVar11 = FUN_03fbe574(uVar11,1);
        puVar10[0xb] = uVar11;
      }
      if (*(long *)(lVar12 + 0x50) != 0) {
        uVar11 = FUN_03f76ed4(*(long *)(lVar12 + 0x50) + 0x20,lVar13 + 8,0);
        uVar11 = FUN_03fbe574(uVar11,1);
        puVar10[10] = uVar11;
      }
      uVar5 = *(uint *)(puVar10 + 5);
      puVar10[6] = param_1;
      uVar3 = uVar5 & 0xffff | 0x150000;
      puVar10[4] = param_1;
      *(uint *)(puVar10 + 5) = uVar5 & 0xff000000 | uVar3;
      puVar1 = (ushort *)((long)puVar9 + 0x135);
      *(uint *)(puVar10 + 7) = *(uint *)(puVar10 + 7) & 0xff15ffff | 0x20150000;
      puVar2 = (ushort *)((long)puVar10 + 0x135);
      uVar6 = *puVar2;
      *(uint *)(puVar10 + 5) = *(uint *)(lVar12 + 0x28) & 0x80000000 | uVar5 & 0x7f000000 | uVar3;
      *(undefined2 *)((long)puVar10 + 300) = *(undefined2 *)((long)puVar9 + 300);
      puVar10[0x24] = puVar9[0x24];
      uVar7 = *puVar1;
      puVar10[8] = puVar10;
      puVar10[9] = puVar10;
      uVar8 = uVar6 & 3 | (uVar7 >> 2 & 1) << 2;
      *puVar2 = uVar6 & 0xfff8 | uVar8;
      uVar7 = (*puVar1 >> 10 & 1) << 10;
      *puVar2 = uVar6 & 0xf800 | uVar6 & 0x3f8 | uVar8 | uVar7;
      *(uint *)((long)puVar10 + 0xe4) = (uint)((*puVar1 & 0x400) == 0);
      *puVar2 = *puVar1 & 0x200 | uVar6 & 0xf800 | uVar6 & 0x1f8 | uVar8 | uVar7;
      uVar4 = *(undefined4 *)((long)puVar9 + 0x11c);
      *(undefined4 *)((long)puVar10 + 0x114) = 0xffffffff;
      *(undefined4 *)(puVar10 + 0x21) = 0xffffffff;
      *(undefined4 *)((long)puVar10 + 0x11c) = uVar4;
      uVar11 = FUN_03fc3520();
      puVar10[0xe] = uVar11;
      lVar12 = FUN_03fc3840(*(undefined8 *)puVar10[0xc]);
      if (lVar12 == DAT_09535580) {
        uVar11 = FUN_03fbe574(**(undefined8 **)(*(long *)(puVar10[0xc] + 8) + 8),1);
        uVar8 = *puVar2;
        puVar10[8] = uVar11;
        puVar10[9] = uVar11;
        uVar7 = uVar8 | 8;
        *puVar2 = uVar7;
        uVar8 = uVar8 & 4;
      }
      else {
        uVar7 = *puVar2;
        uVar8 = uVar7 >> 2 & 1;
      }
      if (uVar8 != 0) {
        uVar11 = puVar9[8];
        puVar10[8] = uVar11;
        puVar10[9] = uVar11;
      }
      *puVar2 = uVar7 & 0xefff | *puVar1 & 0x1000;
      puVar10[0x1e] = puVar9[0x1e];
      FUN_0404bf00(puVar10,param_1 + 3);
      DataMemoryBarrier(2,3);
      lVar12 = param_1[3];
    }
    FUN_03f5d920(auStack_38);
  }
  return lVar12;
}

