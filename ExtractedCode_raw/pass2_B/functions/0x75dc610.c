// rea decompile_all
// name: System.Array$$SetValue
// address: 0x75dc610
// body: available
// range: 0x75dc610-0x75dc613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Array__SetValue(long *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  
  if (param_3 == 0) {
    uVar3 = FUN_03fa6794("indices");
  }
  else {
    if (*(long *)(param_3 + 0x10) == 0) {
      lVar6 = *param_1;
      if (*(ulong *)(param_3 + 0x18) == (ulong)*(byte *)(lVar6 + 0x132)) {
        puVar2 = (uint *)FUN_03f61ed0(param_3);
        if (param_1[2] == 0) {
          uVar1 = *puVar2;
          uVar4 = (ulong)uVar1;
          if (((int)uVar1 < 0) || ((int)param_1[3] <= (int)uVar1)) {
LAB_03f6b690:
            uVar3 = FUN_03fa5d2c();
            goto LAB_03f6b694;
          }
        }
        else {
          uVar4 = (ulong)*(byte *)(lVar6 + 0x132);
          if (uVar4 != 0) {
            piVar5 = (int *)(param_1[2] + 8);
            do {
              if (((int)*puVar2 < *piVar5) || (*piVar5 + piVar5[-2] <= (int)*puVar2))
              goto LAB_03f6b690;
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
              puVar2 = puVar2 + 1;
            } while (uVar4 != 0);
          }
          uVar4 = FUN_03f98644(param_1);
        }
        FUN_03f6b6bc(param_1,param_2,uVar4);
        return;
      }
    }
    uVar3 = FUN_03fa673c(0,0);
  }
LAB_03f6b694:
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar3,0);
}

