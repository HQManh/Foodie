// rea decompile_all
// name: CookingGraph.CookingGraphIndex$$.ctor
// address: 0x447d834
// body: available
// range: 0x447d834-0x447e003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447e000 to 0x89db4a0 FUN_089db4a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingGraphIndex___ctor(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_095180bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc40);
    FUN_03f5c2a4(&DAT_091c6608);
    FUN_03f5c2a4(&DAT_091c6900);
    FUN_03f5c2a4(&DAT_091c92d0);
    FUN_03f5c2a4(&DAT_091c93e8);
    FUN_03f5c2a4(&DAT_091c9360);
    FUN_03f5c2a4(&DAT_091c9490);
    FUN_03f5c2a4(&DAT_091c9548);
    FUN_03f5c2a4(&DAT_091c9510);
    FUN_03f5c2a4(&DAT_091c96b0);
    FUN_03f5c2a4(&DAT_091c9770);
    FUN_03f5c2a4(&DAT_091c9788);
    FUN_03f5c2a4(&DAT_091c97d8);
    FUN_03f5c2a4(&DAT_091c98f0);
    FUN_03f5c2a4(&DAT_091c9910);
    FUN_03f5c2a4(&DAT_091c9940);
    FUN_03f5c2a4(&DAT_091c9ac8);
    FUN_03f5c2a4(&DAT_091c9de0);
    FUN_03f5c2a4(&DAT_091c9e20);
    FUN_03f5c2a4(&DAT_091ca900);
    FUN_03f5c2a4(&DAT_091ca9f0);
    FUN_03f5c2a4(&DAT_091ca9d8);
    FUN_03f5c2a4(&DAT_091ca3d8);
    FUN_03f5c2a4(&DAT_091ca480);
    FUN_03f5c2a4(&DAT_091ca190);
    FUN_03f5c2a4(&DAT_091ca4f8);
    FUN_03f5c2a4(&DAT_091ca500);
    FUN_03f5c2a4(&DAT_091ca510);
    FUN_03f5c2a4(&DAT_091ca660);
    FUN_03f5c2a4(&DAT_091ca770);
    FUN_03f5c2a4(&DAT_091ca810);
    FUN_03f5c2a4(&DAT_091cad10);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cad18);
    FUN_03f5c2a4(&DAT_091caf38);
    FUN_03f5c2a4(&DAT_091caf40);
    FUN_03f5c2a4(&DAT_091cb408);
    FUN_03f5c2a4(&DAT_091cb410);
    FUN_03f5c2a4(&DAT_091cb358);
    FUN_03f5c2a4(&DAT_091cb380);
    FUN_03f5c2a4(&DAT_091a2660);
    FUN_03f5c2a4(&DAT_091a3368);
    FUN_03f5c2a4(&DAT_091a2668);
    FUN_03f5c2a4(&DAT_091a3370);
    FUN_03f5c2a4(&DAT_091a2670);
    FUN_03f5c2a4(&DAT_091a3378);
    FUN_03f5c2a4(&DAT_09179360);
    FUN_03f5c2a4(&DAT_09178038);
    FUN_03f5c2a4(&DAT_09179140);
    FUN_03f5c2a4(&DAT_091785b8);
    FUN_03f5c2a4(&DAT_091781b8);
    FUN_03f5c2a4(&DAT_09178020);
    FUN_03f5c2a4(&DAT_09178028);
    FUN_03f5c2a4(&DAT_091787f0);
    FUN_03f5c2a4(&DAT_09179350);
    FUN_03f5c2a4(&DAT_09179368);
    FUN_03f5c2a4(&DAT_09178ae8);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_09178590);
    FUN_03f5c2a4(&DAT_09178e68);
    FUN_03f5c2a4(&DAT_09179130);
    FUN_03f5c2a4(&DAT_09178968);
    FUN_03f5c2a4(&DAT_091781b0);
    FUN_03f5c2a4(&DAT_091792f8);
    FUN_03f5c2a4(&DAT_09178ae0);
    FUN_03f5c2a4(&DAT_09178570);
    FUN_03f5c2a4(&DAT_09179b98);
    FUN_03f5c2a4(&DAT_09179760);
    FUN_03f5c2a4(&DAT_09179750);
    FUN_03f5c2a4(&DAT_0917f9f0);
    FUN_03f5c2a4(&DAT_091a8268);
    FUN_03f5c2a4(&DAT_091a82c0);
    FUN_03f5c2a4(&DAT_091a8280);
    FUN_03f5c2a4(&DAT_091a8288);
    FUN_03f5c2a4(&DAT_091a8018);
    FUN_03f5c2a4(&DAT_091a8260);
    FUN_03f5c2a4(&DAT_091a82a0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    FUN_03f5c2a4(&DAT_09179d90);
    FUN_03f5c2a4(&DAT_09179e10);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3c8);
    FUN_03f5c2a4(&DAT_0917a3c0);
    FUN_03f5c2a4(&DAT_0917a3b8);
    FUN_03f5c2a4(&DAT_0917aa60);
    FUN_03f5c2a4(&DAT_0917aa70);
    FUN_03f5c2a4(&DAT_0917aa68);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091801b8);
    FUN_03f5c2a4(&DAT_091abc58);
    FUN_03f5c2a4(&DAT_091adcf0);
    FUN_03f5c2a4(&DAT_091add08);
    FUN_03f5c2a4(&DAT_091abc00);
    FUN_03f5c2a4(&DAT_091ada30);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0fe0);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917fa78);
    FUN_03f5c2a4(&DAT_091b6960);
    FUN_03f5c2a4(&DAT_091b6968);
    FUN_03f5c2a4(&DAT_091b6970);
    FUN_03f5c2a4(&DAT_091e7168);
    FUN_03f5c2a4(&DAT_091e7178);
    FUN_03f5c2a4(&DAT_091e7180);
    FUN_03f5c2a4(&DAT_091e7188);
    FUN_03f5c2a4(&DAT_091e7190);
    FUN_03f5c2a4(&DAT_091e7198);
    FUN_03f5c2a4(&DAT_091e7170);
    FUN_03f5c2a4(&DAT_091e71a8);
    FUN_03f5c2a4(&DAT_091e71c8);
    FUN_03f5c2a4(&DAT_091e71d0);
    FUN_03f5c2a4(&DAT_091e71d8);
    FUN_03f5c2a4(&DAT_091e71e0);
    FUN_03f5c2a4(&DAT_091e71e8);
    FUN_03f5c2a4(&DAT_091e71f0);
    FUN_03f5c2a4(&DAT_091e7288);
    FUN_03f5c2a4(&DAT_091e72a8);
    FUN_03f5c2a4(&DAT_091e72b8);
    FUN_03f5c2a4(&DAT_091e72c0);
    FUN_03f5c2a4(&DAT_0918f180);
    FUN_03f5c2a4(&DAT_091e72f0);
    FUN_03f5c2a4(&DAT_0918f190);
    FUN_03f5c2a4(&DAT_091e72d0);
    FUN_03f5c2a4(&DAT_091e72d8);
    FUN_03f5c2a4(&DAT_091e72e0);
    FUN_03f5c2a4(&DAT_0918f188);
    FUN_03f5c2a4(&DAT_091e7328);
    FUN_03f5c2a4(&DAT_0918f1c0);
    FUN_03f5c2a4(&DAT_091e7330);
    FUN_03f5c2a4(&DAT_0918f1c8);
    FUN_03f5c2a4(&DAT_091e7338);
    FUN_03f5c2a4(&DAT_0918f1d0);
    FUN_03f5c2a4(&DAT_0918f178);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_095180bc = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f180);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_3);
    *(undefined8 *)(lVar1 + 0x18) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_2);
    System_Object___ctor(param_1,0);
    *(long *)(lVar1 + 0x20) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x20),param_1);
    lVar2 = thunk_FUN_03f9944c(DAT_0918f188);
    System_Object___ctor(lVar2,0);
    if (lVar2 != 0) {
      plVar4 = (long *)(lVar2 + 0x28);
      *plVar4 = lVar1;
      thunk_FUN_03f5d7b8(plVar4,lVar1);
      if (*plVar4 != 0) {
        *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*plVar4 + 0x18);
        thunk_FUN_03f5d7b8();
        if (*plVar4 != 0) {
          *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*plVar4 + 0x10);
          thunk_FUN_03f5d7b8();
          if (((*plVar4 != 0) && (lVar1 = *(long *)(*plVar4 + 0x18), lVar1 != 0)) &&
             (lVar1 = *(long *)(lVar1 + 0x38), lVar1 != 0)) {
            uVar3 = FUN_057e28a4(lVar1,DAT_091ada30);
            *(undefined8 *)(param_1 + 0x10) = uVar3;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar3);
            if ((*plVar4 != 0) && (lVar1 = *(long *)(*plVar4 + 0x18), lVar1 != 0)) {
              if (*(long *)(lVar1 + 0x50) != 0) {
                FUN_089db4a0(&DAT_091abc00);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

