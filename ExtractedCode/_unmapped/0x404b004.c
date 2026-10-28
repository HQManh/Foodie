// rea decompile_all
// name: FUN_0404b004
// address: 0x404b004
// body: available
// range: 0x404b004-0x404b1ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x404b1c8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x404b1ec to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_0404b004(undefined8 *param_1,uint param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_2 & 0xff) == 0xff) {
    return (undefined8 *)0x0;
  }
  uVar1 = param_2 & 0xf;
  puVar5 = (ulong *)*param_1;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if (uVar1 == 0) goto LAB_0404b120;
      if (uVar1 != 1) goto LAB_0404b1ec;
      uVar8 = 0;
      puVar4 = (undefined8 *)0x0;
      puVar6 = puVar5;
      do {
        puVar7 = (ulong *)((long)puVar6 + 1);
        uVar9 = *puVar6;
        uVar3 = uVar8 & 0x3f;
        uVar8 = uVar8 + 7;
        puVar4 = (undefined8 *)(((ulong)(byte)uVar9 & 0x7f) << uVar3 | (ulong)puVar4);
        puVar6 = puVar7;
      } while ((char)(byte)uVar9 < '\0');
    }
    else if (uVar1 == 2) {
      puVar7 = (ulong *)((long)puVar5 + 2);
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar5;
    }
    else {
      if (uVar1 != 3) goto LAB_0404b1ec;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar5;
joined_r0x0404b0bc:
      puVar7 = (ulong *)((long)puVar5 + 4);
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) goto LAB_0404b120;
    if (uVar1 != 9) goto LAB_0404b1ec;
    uVar8 = 0;
    uVar3 = 0;
    puVar6 = puVar5;
    do {
      puVar7 = (ulong *)((long)puVar6 + 1);
      bVar2 = (byte)*puVar6;
      uVar9 = uVar8 & 0x3f;
      uVar8 = uVar8 + 7;
      uVar3 = ((ulong)bVar2 & 0x7f) << uVar9 | uVar3;
      puVar6 = puVar7;
    } while ((char)bVar2 < '\0');
    uVar9 = -1L << (uVar8 & 0x3f);
    if (0x3f < uVar8 || bVar2 < 0x40) {
      uVar9 = 0;
    }
    puVar4 = (undefined8 *)(uVar3 | uVar9);
  }
  else if (uVar1 == 10) {
    puVar7 = (ulong *)((long)puVar5 + 2);
    puVar4 = (undefined8 *)(long)(short)*puVar5;
  }
  else {
    if (uVar1 == 0xb) {
      puVar4 = (undefined8 *)(long)(int)(uint)*puVar5;
      goto joined_r0x0404b0bc;
    }
    if (uVar1 != 0xc) goto LAB_0404b1ec;
LAB_0404b120:
    puVar7 = puVar5 + 1;
    puVar4 = (undefined8 *)*puVar5;
  }
  uVar1 = (param_2 & 0xff) >> 4 & 7;
  if (uVar1 != 0) {
    if (uVar1 == 3) {
      if (param_3 == 0) {
        __assert2("out/llvm-project/libcxxabi/src/cxa_personality.cpp",0x135,
                  "uintptr_t __cxxabiv1::readEncodedPointer(const uint8_t **, uint8_t, uintptr_t)",
                  "(base != 0) && \"DW_EH_PE_datarel is invalid with a base of 0\"");
LAB_0404b1ec:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_0404b188;
      puVar4 = (undefined8 *)((long)puVar4 + param_3);
    }
    else {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar4 == (undefined8 *)0x0) goto LAB_0404b188;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar5);
    }
  }
  if ((puVar4 != (undefined8 *)0x0) && ((param_2 >> 7 & 1) != 0)) {
    puVar4 = (undefined8 *)*puVar4;
    *param_1 = puVar7;
    return puVar4;
  }
LAB_0404b188:
  *param_1 = puVar7;
  return puVar4;
}

