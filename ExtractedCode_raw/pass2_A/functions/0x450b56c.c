// rea decompile_all
// name: Utilities.GlobalShaderControl$$Apply
// address: 0x450b56c
// body: available
// range: 0x450b56c-0x450b987 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x450b970 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450b974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450b978 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450b97c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450b980 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x450b984 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_GlobalShaderControl__Apply(long param_1)

{
  ulong uVar1;
  undefined8 local_110;
  undefined8 *puStack_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a0;
  undefined8 *puStack_98;
  long local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  
  if ((DAT_095184fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a5330);
    FUN_03f5c2a4(&DAT_091a5378);
    FUN_03f5c2a4(&DAT_091a5360);
    FUN_03f5c2a4(&DAT_091a5348);
    FUN_03f5c2a4(&DAT_091a5318);
    FUN_03f5c2a4(&DAT_091a5380);
    FUN_03f5c2a4(&DAT_091a5368);
    FUN_03f5c2a4(&DAT_091a5350);
    FUN_03f5c2a4(&DAT_091a5338);
    FUN_03f5c2a4(&DAT_091a5320);
    FUN_03f5c2a4(&DAT_091a5328);
    FUN_03f5c2a4(&DAT_091a5340);
    FUN_03f5c2a4(&DAT_091a5358);
    FUN_03f5c2a4(&DAT_091a5388);
    FUN_03f5c2a4(&DAT_091a5370);
    FUN_03f5c2a4(&DAT_091b2d50);
    FUN_03f5c2a4(&DAT_091b2d90);
    FUN_03f5c2a4(&DAT_091b2d10);
    FUN_03f5c2a4(&DAT_091b2d70);
    FUN_03f5c2a4(&DAT_091b2d30);
    FUN_03f5c2a4(&DAT_091ba190);
    FUN_03f5c2a4(&DAT_091ba1a0);
    FUN_03f5c2a4(&DAT_091ba160);
    FUN_03f5c2a4(&DAT_091ba180);
    FUN_03f5c2a4(&DAT_091ba170);
    DAT_095184fe = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  local_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_b0 = 0;
  local_e0 = 0;
  puStack_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_057e185c(&local_110,*(long *)(param_1 + 0x28),DAT_091b2d50);
    local_70 = local_100;
    puStack_78 = puStack_108;
    local_80 = local_110;
    local_110 = 0;
    puStack_108 = &local_80;
    while (uVar1 = FUN_071bd28c(&local_80,DAT_091a5350), (uVar1 & 1) != 0) {
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_060d9bb4(local_70,DAT_091ba170);
    }
    FUN_071bd288(&local_80,DAT_091a5348);
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_057e185c(&local_110,*(long *)(param_1 + 0x30),DAT_091b2d30);
      local_90 = local_100;
      puStack_98 = puStack_108;
      local_a0 = local_110;
      local_110 = 0;
      puStack_108 = &local_a0;
      while (uVar1 = FUN_071bd28c(&local_a0,DAT_091a5338), (uVar1 & 1) != 0) {
        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_060d9c3c(local_90,DAT_091ba180);
      }
      FUN_071bd288(&local_a0,DAT_091a5330);
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_057e185c(&local_110,*(long *)(param_1 + 0x38),DAT_091b2d10);
        local_b0 = local_100;
        puStack_b8 = puStack_108;
        local_c0 = local_110;
        local_110 = 0;
        puStack_108 = &local_c0;
        while (uVar1 = FUN_071bd28c(&local_c0,DAT_091a5320), (uVar1 & 1) != 0) {
          if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_060d9b6c(local_b0,DAT_091ba160);
        }
        FUN_071bd288(&local_c0,DAT_091a5318);
        if (*(long *)(param_1 + 0x40) != 0) {
          FUN_057e185c(&local_110,*(long *)(param_1 + 0x40),DAT_091b2d90);
          local_d0 = local_100;
          puStack_d8 = puStack_108;
          local_e0 = local_110;
          local_110 = 0;
          puStack_108 = &local_e0;
          while (uVar1 = FUN_071bd28c(&local_e0,DAT_091a5380), (uVar1 & 1) != 0) {
            if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_060d9c80(local_d0,DAT_091ba1a0);
          }
          FUN_071bd288(&local_e0,DAT_091a5378);
          if (*(long *)(param_1 + 0x48) != 0) {
            FUN_057e185c(&local_f8,*(long *)(param_1 + 0x48),DAT_091b2d70);
            local_110 = 0;
            puStack_108 = &local_f8;
            while( true ) {
              uVar1 = FUN_071bd28c(&local_f8,DAT_091a5368);
              if ((uVar1 & 1) == 0) {
                FUN_071bd288(&local_f8,DAT_091a5360);
                return;
              }
              if (local_e8 == 0) break;
              FUN_060d9bf8(local_e8,DAT_091ba190);
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

