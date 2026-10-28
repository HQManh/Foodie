// rea decompile_all
// name: System.IO.StreamWriter$$Init
// address: 0x756ecc0
// body: available
// range: 0x756ecc0-0x756ee43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756ee40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_StreamWriter__Init(long param_1,long param_2,long param_3,int param_4,byte param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((DAT_09521a2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_09521a2d = 1;
  }
  plVar5 = (long *)(param_1 + 0x30);
  *plVar5 = param_2;
  thunk_FUN_03f5d7b8(plVar5,param_2);
  plVar6 = (long *)(param_1 + 0x38);
  *plVar6 = param_3;
  thunk_FUN_03f5d7b8(plVar6,param_3);
  plVar6 = (long *)*plVar6;
  if (plVar6 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar6 + 0x338))(plVar6,*(undefined8 *)(*plVar6 + 0x340));
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    thunk_FUN_03f5d7b8();
    if (param_4 < 0x81) {
      param_4 = 0x80;
    }
    uVar2 = FUN_03f5c394(DAT_0917fcc8,param_4);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar2);
    plVar6 = *(long **)(param_1 + 0x38);
    if (plVar6 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar6 + 0x348))(plVar6,param_4,*(undefined8 *)(*plVar6 + 0x350));
      uVar2 = FUN_03f5c394(DAT_0917fc88,uVar1);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar2);
      plVar6 = *(long **)(param_1 + 0x30);
      *(int *)(param_1 + 0x5c) = param_4;
      if (plVar6 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        if ((uVar3 & 1) != 0) {
          plVar5 = (long *)*plVar5;
          if (plVar5 == (long *)0x0) goto LAB_0756ee40;
          lVar4 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
          if (0 < lVar4) {
            *(undefined1 *)(param_1 + 0x61) = 1;
          }
        }
        *(byte *)(param_1 + 0x62) = (param_5 ^ 0xff) & 1;
        return;
      }
    }
  }
LAB_0756ee40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

