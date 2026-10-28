// rea decompile_all
// name: MessagePack.BufferWriter$$MigrateToSequence
// address: 0x7381c50
// body: available
// range: 0x7381c50-0x7381d8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7381d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_BufferWriter__MigrateToSequence(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09520a17 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09179fa0);
    FUN_03f5c2a4(&DAT_091d2f00);
    FUN_03f5c2a4(&DAT_091ba900);
    DAT_09520a17 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (param_1[7] != 0) {
    auVar7 = MessagePack_SequencePool__Rent(param_1[7],0);
    plVar3 = auVar7._8_8_;
    *(undefined1 (*) [16])(param_1 + 8) = auVar7;
    *param_1 = (long)plVar3;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *plVar3;
    lVar1 = param_1[5];
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09179fa0) {
          puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_07381d2c;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09179fa0,2);
LAB_07381d2c:
    auVar7 = (*(code *)*puVar2)(plVar3,(int)lVar1,puVar2[1]);
    local_40 = FUN_0739ce0c(param_1[3],param_1[4],0,(int)param_1[5],DAT_091d2f00);
    FUN_06108408(local_40,auVar7._0_8_,auVar7._8_8_,DAT_091ba900);
    param_1[7] = 0;
  }
  return;
}

