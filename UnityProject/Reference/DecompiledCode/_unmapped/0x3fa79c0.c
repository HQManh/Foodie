// rea decompile_all
// name: FUN_03fa79c0
// address: 0x3fa79c0
// body: available
// range: 0x3fa79c0-0x3fa7ae3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_03fa79c0(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 local_48;
  undefined8 local_38;
  
  if ((*(ushort *)(param_3 + 0x135) >> 8 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    param_1 = param_1 + (param_2 & 1) * -0x10;
    do {
      local_38 = 0;
      lVar3 = FUN_03fbec04(param_3,&local_38);
      while (lVar3 != 0) {
        if (((*(byte *)(*(long *)(lVar3 + 8) + 8) >> 4 & 1) == 0) &&
           (uVar4 = FUN_03fa7ba0(lVar3), (uVar4 & 1) != 0)) {
          uVar4 = FUN_03fb84ac(*(undefined8 *)(lVar3 + 8));
          iVar1 = *(int *)(lVar3 + 0x18);
          if ((uVar4 & 1) == 0) {
            if (iVar1 == -1) goto LAB_03fa7a2c;
            local_48 = 0;
            FUN_03fbac84(param_1,lVar3,&local_48);
            uVar2 = FUN_03fa7ae4(local_48,param_4);
          }
          else {
            uVar4 = FUN_03fb8274(*(undefined8 *)(lVar3 + 8));
            if ((uVar4 & 1) == 0) {
              uVar5 = thunk_FUN_03fc3840();
            }
            else {
              uVar5 = *(undefined8 *)(**(long **)(lVar3 + 8) + 0x18);
            }
            uVar2 = FUN_03fa79c0(param_1 + iVar1,1,uVar5,param_4);
          }
          uVar6 = uVar6 | uVar2;
        }
LAB_03fa7a2c:
        lVar3 = FUN_03fbec04(param_3,&local_38);
      }
      param_3 = *(long *)(param_3 + 0x58);
    } while (param_3 != 0);
  }
  return uVar6 & 1;
}

