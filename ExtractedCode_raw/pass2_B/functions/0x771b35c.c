// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonObject$$Add
// address: 0x771b35c
// body: available
// range: 0x771b35c-0x771b4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771b4b4 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771b4b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Bson_BsonObject__Add(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_095229f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182008);
    FUN_03f5c2a4(&DAT_09182020);
    FUN_03f5c2a4(&DAT_091ab5d8);
    DAT_095229f2 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  lVar2 = thunk_FUN_03f9944c(DAT_09182008);
  System_Object___ctor(lVar2,0);
  lVar3 = thunk_FUN_03f9944c(DAT_09182020);
  System_Object___ctor(lVar3,0);
  *(undefined8 *)(lVar3 + 0x20) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x20),param_2);
  *(undefined1 *)(lVar3 + 0x30) = 0;
  *(undefined1 *)(lVar3 + 0x28) = 2;
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = lVar3;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),lVar3);
    *(long *)(lVar2 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_3);
    lVar3 = DAT_091ab5d8;
    if (lVar6 != 0) {
      lVar5 = *(long *)(lVar6 + 0x10);
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = lVar2;
          thunk_FUN_03f5d7b8(plVar4,lVar2);
        }
        else {
          FUN_057e0c68(lVar6,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (param_3 != 0) {
          *(long *)(param_3 + 0x10) = param_1;
          thunk_FUN_03f5d7b8((long *)(param_3 + 0x10),param_1);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

