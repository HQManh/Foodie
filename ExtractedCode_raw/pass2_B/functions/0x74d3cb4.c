// rea decompile_all
// name: System.Resources.ResourceReader$$.ctor
// address: 0x74d3cb4
// body: available
// range: 0x74d3cb4-0x74d3df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74d3df0 to 0x74da724 System.Resources.ResourceReader$$ReadResources (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Resources_ResourceReader___ctor(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  
  if ((DAT_09521576 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ca0);
    FUN_03f5c2a4(&DAT_0918c878);
    DAT_09521576 = 1;
  }
  System_Object___ctor(param_1,0);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),param_3);
  uVar3 = System_Text_Encoding__get_UTF8(0);
  uVar4 = thunk_FUN_03f9944c(DAT_09181ca0);
  System_IO_BinaryReader___ctor(uVar4,param_2,uVar3,0);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x10),uVar4);
  lVar2 = DAT_0918c878;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  else {
    bVar1 = *(byte *)(DAT_0918c878 + 0x130);
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = param_2;
      if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != DAT_0918c878) {
        plVar5 = (long *)0x0;
      }
    }
    *(long **)(param_1 + 0x70) = plVar5;
    if (*(byte *)(*param_2 + 0x130) < bVar1) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != lVar2) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_03f5d7b8(param_1 + 0x70,param_2);
  System_Resources_ResourceReader__ReadResources(param_1);
  return;
}

