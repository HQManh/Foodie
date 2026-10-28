// rea decompile_all
// name: AnhPD.FoodOrder.DebugReportCodec$$Encode
// address: 0x412bbd8
// body: available
// range: 0x412bbd8-0x412bdff inclusive
// range: 0x412be7c-0x412bf07 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412bdec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412bdf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412bdf8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412bdfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x412bf04 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0412bd88) */
/* WARNING: Removing unreachable block (ram,0x0412be7c) */
/* WARNING: Removing unreachable block (ram,0x0412bdf4) */
/* WARNING: Removing unreachable block (ram,0x0412bf04) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 AnhPD_FoodOrder_DebugReportCodec__Encode(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  int *piVar7;
  
  if ((DAT_09516307 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_09183980);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09188030);
    FUN_03f5c2a4(&DAT_0920a0e8);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09516307 = 1;
  }
  plVar1 = (long *)System_Text_Encoding__get_UTF8(0);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = DAT_091f5700;
  if (param_1 != 0) {
    lVar2 = param_1;
  }
  lVar2 = (**(code **)(*plVar1 + 600))(plVar1,lVar2,*(undefined8 *)(*plVar1 + 0x260));
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09188030);
  System_IO_MemoryStream___ctor(plVar1,0);
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_09183980);
  System_IO_Compression_DeflateStream___ctor(plVar3,plVar1,0,1,0);
  if ((lVar2 == 0) || (plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  (**(code **)(*plVar3 + 0x398))
            (plVar3,lVar2,0,*(undefined4 *)(lVar2 + 0x18),*(undefined8 *)(*plVar3 + 0x3a0));
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0412bd70;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_0412bd70:
    (*(code *)*puVar4)(plVar3,puVar4[1]);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = (**(code **)(*plVar1 + 0x418))(plVar1,*(undefined8 *)(*plVar1 + 0x420));
  if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Convert__ToBase64String(uVar5,0);
  uVar5 = System_String__Concat(DAT_0920a0e8,uVar5,0);
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185a58) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0412bed8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar1,DAT_09185a58,0);
LAB_0412bed8:
    (*(code *)*puVar4)(plVar1,puVar4[1]);
  }
  return uVar5;
}

