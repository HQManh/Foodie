// rea decompile_all
// name: FUN_03fbf7c0
// address: 0x3fbf7c0
// body: available
// range: 0x3fbf7c0-0x3fbf92f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_03fbf7c0(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  FUN_03fbf470();
  FUN_03fbf470(param_2);
  FUN_03fbee1c(param_1);
  if ((param_3 & 1) != 0) {
    if ((*(uint *)(param_2 + 0x118) >> 5 & 1) == 0) {
      uVar1 = *(uint *)(param_2 + 0x28) >> 0x10 & 0xff;
      if ((uVar1 == 0x1e) || (uVar1 == 0x13)) goto LAB_03fbf80c;
      uVar1 = *(uint *)(param_2 + 0x28) >> 0x10;
LAB_03fbf870:
      if (((uVar1 & 0xff) != 0x1e) && ((uVar1 & 0xff) != 0x13)) goto LAB_03fbf8c8;
    }
    else {
LAB_03fbf80c:
      if ((((*(byte *)(param_1 + 0x118) >> 5 & 1) == 0) && (*(char *)(param_1 + 0x2a) != '\x13')) &&
         (*(char *)(param_1 + 0x2a) != '\x1e')) {
        do {
          FUN_03fbee1c(param_1);
          uVar2 = (ulong)*(ushort *)(param_1 + 300);
          if (uVar2 != 0) {
            plVar3 = *(long **)(param_1 + 0xa8);
            do {
              if (*plVar3 == param_2) {
                return true;
              }
              uVar2 = uVar2 - 1;
              plVar3 = plVar3 + 1;
            } while (uVar2 != 0);
          }
          param_1 = *(long *)(param_1 + 0x58);
        } while (param_1 != 0);
        goto LAB_03fbf908;
      }
      if ((*(uint *)(param_2 + 0x118) >> 5 & 1) == 0) {
        uVar1 = (uint)*(ushort *)(param_2 + 0x2a);
        goto LAB_03fbf870;
      }
    }
    if (((*(byte *)(param_1 + 0x118) >> 5 & 1) != 0) ||
       ((*(char *)(param_1 + 0x2a) == '\x1e' || (*(char *)(param_1 + 0x2a) == '\x13')))) {
      uVar2 = (ulong)*(ushort *)(param_1 + 300);
      if (uVar2 != 0) {
        plVar3 = *(long **)(param_1 + 0xa8);
        do {
          if (*plVar3 == param_2) {
            return true;
          }
          uVar2 = uVar2 - 1;
          plVar3 = plVar3 + 1;
        } while (uVar2 != 0);
      }
      goto LAB_03fbf908;
    }
  }
LAB_03fbf8c8:
  if (((((*(byte *)(param_1 + 0x118) >> 5 & 1) == 0) && (*(char *)(param_1 + 0x2a) != '\x13')) &&
      (*(char *)(param_1 + 0x2a) != '\x1e')) &&
     ((*(byte *)(param_2 + 0x130) <= *(byte *)(param_1 + 0x130) &&
      (*(long *)(*(long *)(param_1 + 200) + (ulong)*(byte *)(param_2 + 0x130) * 8 + -8) == param_2))
     )) {
    return true;
  }
LAB_03fbf908:
  return DAT_095353e8 == param_2;
}

