// rea decompile_all
// name: System.Text.DecoderExceptionFallbackBuffer$$Fallback
// address: 0x763c1dc
// body: available
// range: 0x763c1dc-0x763c1e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_DecoderExceptionFallbackBuffer__Fallback
               (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x1;
  ulong uVar5;
  undefined4 uStack_54;
  code *pcStack_50;
  
  System_Text_DecoderExceptionFallbackBuffer__Throw();
  pcStack_50 = System_Text_DecoderExceptionFallbackBuffer__Throw;
  if ((DAT_09522268 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_09213540);
    DAT_09522268 = 1;
  }
  if (extraout_x1 == 0) {
LAB_0763c23c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar2,*(int *)(extraout_x1 + 0x18) * 3,0);
  if (0 < *(int *)(extraout_x1 + 0x18)) {
    if (lVar2 == 0) goto LAB_0763c23c;
    uVar5 = 0;
    do {
      System_Text_StringBuilder__Append(lVar2,0x5b,0);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(uint *)(extraout_x1 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar3 = System_Byte__ToString(extraout_x1 + 0x20 + uVar5,DAT_09213540,uVar3,0);
      System_Text_StringBuilder__Append(lVar2,uVar3,0);
      System_Text_StringBuilder__Append(lVar2,0x5d,0);
      uVar1 = uVar5 + 1;
    } while ((uVar5 < 0x13) && (uVar5 = uVar1, (long)uVar1 < (long)*(int *)(extraout_x1 + 0x18)));
    if (uVar1 == 0x14) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_091f5e18);
      System_Text_StringBuilder__Append(lVar2,uVar3,0);
    }
  }
  uStack_54 = param_3;
  uVar3 = FUN_03f5c42c(DAT_09535420,&uStack_54);
  uVar4 = thunk_FUN_03fc39d4(&DAT_09211b20);
  uVar3 = SR__Format(uVar4,lVar2,uVar3,0);
  thunk_FUN_03fc39d4(&DAT_09183808);
  uVar4 = thunk_FUN_03f9944c();
  System_Text_DecoderFallbackException___ctor(uVar4,uVar3,extraout_x1,param_3);
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c8198);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar3);
}

