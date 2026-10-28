// rea decompile_all
// name: FUN_0404b694
// address: 0x404b694
// body: available
// range: 0x404b694-0x404bc2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0404b694(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (uint)param_1;
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(param_2 + 0x10);
  }
  if ((uVar4 >> 7 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x400;
  }
  uVar3 = (uint)uVar5;
  if ((uVar4 >> 4 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x8000;
  }
  if ((uVar4 >> 0x1b & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 2;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 6;
  }
  if ((~uVar4 & 0xc0000) == 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x20;
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x10;
  }
  if ((uVar4 >> 0x17 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 8;
  }
  if ((uVar4 >> 9 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x10100;
  }
  if ((uVar4 >> 0x18 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x20000;
  }
  if ((uVar4 >> 0xc & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x40;
  }
  if ((uVar4 >> 0x1a & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x800000;
  }
  if ((uVar4 >> 3 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x4000;
  }
  if ((uVar4 >> 5 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x800;
  }
  if ((uVar4 >> 6 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x1000;
  }
  if ((uVar4 >> 0xd & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x100000;
  }
  if ((uVar4 >> 0xe & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x200000;
  }
  if ((uVar4 >> 0x1d & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x400000000000;
  }
  if ((uVar4 >> 0x1c & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x2000000000000;
  }
  if ((uVar3 >> 0x12 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x180000000000;
  }
  if ((uVar3 >> 0x16 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x380000000000;
  }
  if ((uVar3 >> 2 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x2000000000;
  }
  if ((uVar3 >> 3 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x6000000000;
  }
  if ((uVar3 >> 4 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x8000000000;
  }
  if ((uVar3 >> 5 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x10000000000;
  }
  if ((uVar3 >> 6 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x20000000000;
  }
  if ((uVar5 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x80000;
  }
  if ((uVar4 >> 8 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x80;
  }
  if ((uVar3 >> 0x10 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 1;
  }
  if ((uVar3 >> 0xd & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x4000000;
  }
  if ((uVar5 >> 0x20 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x10000000;
  }
  if ((uVar5 >> 0x21 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x100000000;
  }
  if ((uVar3 >> 0xf & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x2000000;
  }
  if ((uVar3 >> 8 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x1000000;
  }
  if ((uVar3 >> 9 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x200000000;
  }
  if ((uVar3 >> 10 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x400000000;
  }
  if ((uVar3 >> 0xb & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x800000000;
  }
  if ((uVar3 >> 0x11 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x4000000000000;
  }
  if ((uVar3 >> 0x15 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x20000000;
  }
  if ((int)uVar3 < 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x40000000000000;
  }
  if ((uVar3 >> 0x17 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x40000000000;
  }
  if ((uVar3 >> 0x18 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x100000000000000;
  }
  if ((uVar3 >> 0x19 & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x80000000000000;
  }
  if ((uVar5 >> 0x2b & 1) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x800000000000000;
  }
  if ((uVar4 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x300;
    }
    if ((uVar5 & 1) != 0 || (param_1 & 0x10000) != 0) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x400000;
    }
    if ((uVar5 & 0x100004000) != 0) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x8000000;
    }
    uRam000000000974b2f8 = uRam000000000974b2f8 | (ulong)(uVar3 << 0x13) & 0x80000000;
    if ((uVar5 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x1000000000;
    }
    uVar5 = uRam000000000974b2f8 | (param_1 & 0x20000) >> 4;
    goto LAB_0404b7fc;
  }
  uVar5 = id_aa64pfr1_el1;
  if ((uVar5 & 0xf00) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x80000000000;
  }
  if ((uVar5 & 0xf0) == 0x10) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x1000000000000;
    if ((uVar5 & 0xf000000) != 0x2000000) goto LAB_0404baec;
LAB_0404bb40:
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x200000000000000;
    uVar5 = id_aa64pfr0_el1;
    uVar4 = (uint)uVar5;
  }
  else {
    if ((uVar5 & 0xf000000) == 0x2000000) goto LAB_0404bb40;
LAB_0404baec:
    uVar5 = id_aa64pfr0_el1;
    uVar4 = (uint)uVar5;
  }
  if ((~uVar4 & 0xf0000) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x300;
  }
  if ((uVar5 & 0xf00000000) != 0) {
    uVar5 = UnkSytemRegRead(3,0,0,4,4);
    if ((uVar5 & 0xf) == 1) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x1000000000;
    }
    else if ((uVar5 & 0xf) == 0) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x40000000;
    }
    if ((uVar5 & 0xf00000) != 0) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x80000000;
    }
  }
  uVar5 = id_aa64isar0_el1;
  if ((uVar5 & 0xf00000000) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x2000;
  }
  uVar2 = id_aa64isar1_el1;
  uVar5 = uVar2 >> 0x14 & 0xf;
  if ((uVar2 & 0xf) != 0) {
    uRam000000000974b2f8 = uRam000000000974b2f8 | 0x40000;
  }
  if (uVar5 != 0) {
    if (uVar5 == 3) {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x400000000400000;
    }
    else {
      uRam000000000974b2f8 = uRam000000000974b2f8 | 0x400000;
    }
  }
  uVar5 = uRam000000000974b2f8 | 0x800000000000;
  if ((uVar2 & 0xf0000000000) != 0x20000000000) {
    uVar5 = uRam000000000974b2f8;
  }
  if ((uVar2 & 0xf00000000000) != 0) {
    uVar5 = uVar5 | 0x8000000;
  }
  if (uVar2 >> 0x3c != 0) {
    if (uVar2 >> 0x3d == 0) {
      uRam000000000974b2f8 = uVar5 | 0x8008000000000000;
      return;
    }
    uVar1 = 0x38000000000000;
    if (uVar2 >> 0x3c < 3) {
      uVar1 = 0x18000000000000;
    }
    uRam000000000974b2f8 = uVar5 | uVar1 | 0x8000000000000000;
    return;
  }
LAB_0404b7fc:
  uRam000000000974b2f8 = uVar5 | 0x8000000000000000;
  return;
}

