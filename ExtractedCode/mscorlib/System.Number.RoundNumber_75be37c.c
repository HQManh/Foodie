// rea decompile_all
// name: System.Number$$RoundNumber
// address: 0x75be37c
// body: available
// range: 0x75be37c-0x75be48b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__RoundNumber(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  short *psVar7;
  
  psVar3 = (short *)System_Number_NumberBuffer__get_digits(param_1,0);
  uVar4 = 0;
  psVar7 = psVar3;
  if ((int)param_2 < 1) {
LAB_075be3c8:
    uVar5 = uVar4;
    if (uVar4 == param_2) goto LAB_075be3d0;
  }
  else {
    do {
      if (*psVar7 == 0) goto LAB_075be3c8;
      uVar4 = uVar4 + 1;
      psVar7 = psVar7 + 1;
      uVar5 = param_2;
    } while (param_2 != uVar4);
LAB_075be3d0:
    uVar4 = uVar5;
    if (0x34 < (ushort)psVar3[(int)param_2]) {
      psVar7 = psVar3 + param_2;
      uVar2 = (ulong)param_2;
      do {
        uVar6 = uVar2;
        psVar7 = psVar7 + -1;
        if ((int)uVar6 < 1) {
          iVar1 = *(int *)(param_1 + 4);
          *psVar3 = 0x31;
          *(int *)(param_1 + 4) = iVar1 + 1;
          uVar6 = 1;
          goto LAB_075be478;
        }
        uVar2 = uVar6 - 1;
      } while (*psVar7 == 0x39);
      *psVar7 = *psVar7 + 1;
      goto LAB_075be478;
    }
  }
  psVar7 = psVar3 + uVar4;
  uVar2 = (ulong)uVar4;
  do {
    uVar6 = uVar2;
    psVar7 = psVar7 + -1;
    if ((int)uVar6 < 1) {
      if ((int)uVar6 == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        System_Number_NumberBuffer__set_sign(param_1,0,0);
        uVar6 = 0;
      }
      break;
    }
    uVar2 = uVar6 - 1;
  } while (*psVar7 == 0x30);
LAB_075be478:
  *(undefined2 *)
   ((-(uVar6 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar6 & 0xffffffff) << 1) + (long)psVar3) = 0;
  return;
}

