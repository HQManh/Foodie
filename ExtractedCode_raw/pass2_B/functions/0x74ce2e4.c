// rea decompile_all
// name: System.Runtime.InteropServices.Marshal$$PtrToStructure
// address: 0x74ce2e4
// body: available
// range: 0x74ce2e4-0x74ce2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Runtime_InteropServices_Marshal__PtrToStructure(void *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  void *__dest;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar5 = FUN_03fa6794("structureType");
  }
  else {
    lVar3 = FUN_03fbe574(*(undefined8 *)(param_2 + 0x10),1);
    uVar1 = *(uint *)(*(long *)(param_2 + 0x10) + 8);
    uVar2 = uVar1 >> 0x10 & 0xff;
    if (((uVar2 == 0xe) || (uVar2 == 0x1d)) ||
       ((uVar1 = uVar1 & 0xff0000, uVar1 == 0x120000 &&
        (uVar4 = FUN_03fc1090(lVar3), (uVar4 & 1) == 0)))) {
      uVar5 = FUN_03fa7050("No parameterless constructor defined for this object.");
    }
    else {
      if ((*(long *)(lVar3 + 0x70) != 0) && (*(long *)(*(long *)(lVar3 + 0x70) + 0x10) != 0)) {
        uVar5 = thunk_FUN_03f9944c(lVar3);
        if (uVar1 == 0x120000) {
          lVar6 = FUN_03fbef44(lVar3,".ctor",0);
          (**(code **)(lVar6 + 8))(uVar5);
          uVar9 = *(undefined8 *)(lVar3 + 0x70);
          uVar7 = uVar5;
        }
        else {
          uVar7 = FUN_03f99594(uVar5);
          uVar9 = *(undefined8 *)(lVar3 + 0x70);
        }
        FUN_03f9238c(param_1,uVar7,uVar9);
        return uVar5;
      }
      if (*(int *)(lVar3 + 0x108) != -1) {
        if (*(char *)(*(long *)(param_2 + 0x10) + 10) == '\x01') {
          uVar5 = FUN_03fa6ecc("Cannot dynamically create an instance of System.Void.");
          goto LAB_03f6865c;
        }
        if ((*(ushort *)(lVar3 + 0x135) >> 2 & 1) == 0) {
          uVar5 = thunk_FUN_03f9944c(lVar3);
          __dest = (void *)FUN_03f99594();
          memcpy(__dest,param_1,(long)*(int *)(lVar3 + 0x108));
          return uVar5;
        }
      }
      if ((*(long *)(lVar3 + 0x60) == 0) && ((*(ushort *)(lVar3 + 0x135) >> 4 & 1) == 0)) {
        pcVar8 = "The specified structure must be blittable or have layout information.";
      }
      else {
        pcVar8 = "The specified object must not be an instance of a generic type.";
      }
      uVar5 = FUN_03fa673c("structure",pcVar8);
    }
  }
LAB_03f6865c:
                    /* WARNING: Subroutine does not return */
  FUN_03fa5c38(uVar5,0);
}

