// rea decompile_all
// name: FUN_03fd0b78
// address: 0x3fd0b78
// body: available
// range: 0x3fd0b78-0x3fd0dc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fd0b78(ulong param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  if (DAT_097480f0 == 0 && DAT_09748500 == 0) {
    if ((DAT_09748548 == 0) || (DAT_09535c28 == 0)) {
      if (((DAT_09748610 <= DAT_09748618 + 500) || (DAT_09535c38 == 0 && DAT_09748620 == 0)) &&
         (iVar2 = FUN_03fce274(), iVar2 == 0)) goto LAB_03fd0ba4;
      if (DAT_09535c28 != 0) {
        bVar1 = DAT_09748548 != 0;
        goto LAB_03fd0c20;
      }
      puVar3 = &LAB_03fce6f8;
    }
    else {
      bVar1 = true;
LAB_03fd0c20:
      puVar3 = &LAB_03fce6f8;
      if (!(bool)(param_3 != 0 & bVar1)) {
        puVar3 = PTR_LAB_09515670;
      }
    }
    iVar2 = FUN_03fcea68(puVar3);
    if ((param_3 == 0) || (iVar2 != 0)) {
      DAT_09748618 = DAT_09748610;
      DAT_09748620 = DAT_09535c38;
      return 1;
    }
    bVar1 = true;
  }
  else {
LAB_03fd0ba4:
    bVar1 = false;
  }
  uVar4 = 0;
  if (DAT_09515660 << 0xc != 0) {
    uVar4 = (ulong)(DAT_09535be8 - DAT_097485f0) / (ulong)(DAT_09515660 << 0xc);
  }
  uVar4 = uVar4 + param_1;
  if (0x1000 < uVar4) {
    if (param_2 == 0) {
      uVar4 = DAT_09515610 >> 0xb & 0x1ffffffffffffe;
      if (param_1 <= uVar4) {
        uVar4 = param_1;
      }
    }
    else {
      uVar4 = 4;
    }
    uVar4 = uVar4 + param_1;
    if (uVar4 < 0x1001) {
      uVar4 = 0x1000;
    }
    if (0xffffffffffffe < uVar4) {
      uVar4 = 0xfffffffffffff;
    }
  }
  iVar2 = FUN_03fd09e8(uVar4);
  if ((iVar2 == 0) && ((uVar4 == param_1 || (iVar2 = FUN_03fd09e8(param_1), iVar2 == 0)))) {
    if (!bVar1) {
      uVar4 = (ulong)DAT_09748518;
      DAT_09748518 = DAT_09748518 + 1;
      if (DAT_09748608 <= uVar4) {
        (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                  ("GC Warning: Out of Memory! Heap size: %ld MiB. Returning NULL!\n",
                   (ulong)(DAT_09535be8 - DAT_09535c88) >> 0x14);
        return 0;
      }
      (*(code *)PTR_thunk_FUN_03fcb048_09515630)
                ("GC Warning: Out of Memory!  Trying to continue...\n",0);
    }
    FUN_03fcea68(&LAB_03fce6f8);
  }
  else {
    if (DAT_09748518 == 0) {
      return 1;
    }
    if (DAT_09535be0 == 0) {
      return 1;
    }
    FUN_03fcb51c("Memory available again...\n");
  }
  return 1;
}

