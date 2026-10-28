// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonBinaryWriter$$WriteUtf8Bytes
// address: 0x7719348
// body: available
// range: 0x7719348-0x77194bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77194bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Bson_BsonBinaryWriter__WriteUtf8Bytes(long param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_095229e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181fd8);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_095229e1 = 1;
  }
  if (param_2 != 0) {
    if (param_3 < 0x101) {
      plVar1 = (long *)(param_1 + 0x18);
      if (*plVar1 == 0) {
        lVar3 = FUN_03f5c394(DAT_0917fc88,0x100);
        *plVar1 = lVar3;
        thunk_FUN_03f5d7b8(plVar1,lVar3);
      }
      if (*(int *)(DAT_09181fd8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar4 = (long *)**(long **)(DAT_09181fd8 + 0xb8);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x268))
                  (plVar4,param_2,0,*(undefined4 *)(param_2 + 0x10),*(undefined8 *)(param_1 + 0x18),
                   0,*(undefined8 *)(*plVar4 + 0x270));
        plVar4 = *(long **)(param_1 + 0x10);
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x077194b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x218))(plVar4,*plVar1,0,param_3,*(undefined8 *)(*plVar4 + 0x220));
          return;
        }
      }
    }
    else {
      if (*(int *)(DAT_09181fd8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar1 = (long *)**(long **)(DAT_09181fd8 + 0xb8);
      if (plVar1 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 600))(plVar1,param_2,*(undefined8 *)(*plVar1 + 0x260));
        plVar1 = *(long **)(param_1 + 0x10);
        if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x077193fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x208))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x210));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

