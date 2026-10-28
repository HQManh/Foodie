// rea decompile_all
// name: System.Array$$GetValue
// address: 0x75db70c
// body: available
// range: 0x75db70c-0x75db70f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Array__GetValue(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  
  if (param_2 == 0) {
    uVar5 = FUN_03fa6794("indices");
  }
  else {
    if (*(long *)(param_2 + 0x10) == 0) {
      lVar8 = *param_1;
      if (*(ulong *)(param_2 + 0x18) == (ulong)*(byte *)(lVar8 + 0x132)) {
        puVar3 = (uint *)FUN_03f61ed0(param_2);
        if (param_1[2] == 0) {
          uVar1 = *puVar3;
          if (((int)uVar1 < 0) || ((int)param_1[3] <= (int)uVar1)) {
LAB_03f6b540:
            uVar5 = FUN_03fa5d2c();
            goto LAB_03f6b544;
          }
          lVar4 = *(long *)(*param_1 + 0x40);
          lVar8 = (ulong)*(uint *)(*param_1 + 0x104) * (ulong)uVar1;
        }
        else {
          uVar6 = (ulong)*(byte *)(lVar8 + 0x132);
          if (uVar6 != 0) {
            piVar7 = (int *)(param_1[2] + 8);
            do {
              if (((int)*puVar3 < *piVar7) || (*piVar7 + piVar7[-2] <= (int)*puVar3))
              goto LAB_03f6b540;
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
              puVar3 = puVar3 + 1;
            } while (uVar6 != 0);
          }
          iVar2 = FUN_03f98644(param_1);
          lVar4 = *(long *)(*param_1 + 0x40);
          lVar8 = (long)iVar2 * (ulong)*(uint *)(*param_1 + 0x104);
        }
        if (-1 < *(int *)(lVar4 + 0x28)) {
          return *(undefined8 *)((long)param_1 + lVar8 + 0x20);
        }
        uVar5 = FUN_03f99084(lVar4,(long)param_1 + lVar8 + 0x20);
        return uVar5;
      }
    }
    uVar5 = FUN_03fa673c(0,0);
  }
LAB_03f6b544:
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar5,0);
}

