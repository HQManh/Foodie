// rea decompile_all
// name: System.Runtime.Remoting.RemotingServices$$.cctor
// address: 0x7486878
// body: available
// range: 0x7486878-0x7486b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7486b44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Remoting_RemotingServices___cctor(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0952128a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181c60);
    FUN_03f5c2a4(&DAT_09185048);
    FUN_03f5c2a4(&DAT_09172a10);
    FUN_03f5c2a4(&DAT_09189ed8);
    FUN_03f5c2a4(&DAT_09189ee8);
    FUN_03f5c2a4(&DAT_09188ac8);
    FUN_03f5c2a4(&DAT_09202950);
    FUN_03f5c2a4(&DAT_0920b9f8);
    FUN_03f5c2a4(&DAT_09202930);
    DAT_0952128a = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  uVar2 = thunk_FUN_03f9944c(DAT_09185048);
  System_Collections_Hashtable___ctor(uVar2,0);
  **(undefined8 **)(DAT_09189ed8 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09189ed8 + 0xb8),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_09188ac8);
  System_Object___ctor(uVar2,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x20);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = DAT_09189ee8;
  *(undefined4 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x28) = 1;
  uVar4 = thunk_FUN_03f9944c(uVar2);
  System_Runtime_Remoting_Messaging_RemotingSurrogateSelector___ctor(uVar4,0);
  System_Runtime_Serialization_StreamingContext___ctor(&local_50,0x10,0,0);
  uVar1 = uStack_48;
  uVar2 = local_50;
  uVar5 = thunk_FUN_03f9944c(DAT_09181c60);
  System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor(uVar5,uVar4,uVar2,uVar1,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 8);
  *puVar3 = uVar5;
  thunk_FUN_03f5d7b8(puVar3,uVar5);
  uVar1 = uStack_48;
  uVar2 = local_50;
  uVar4 = thunk_FUN_03f9944c(DAT_09181c60);
  System_Runtime_Serialization_Formatters_Binary_BinaryFormatter___ctor(uVar4,0,uVar2,uVar1,0);
  puVar3 = (undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x10);
  *puVar3 = uVar4;
  thunk_FUN_03f5d7b8(puVar3,uVar4);
  lVar7 = *(long *)(*(long *)(DAT_09189ed8 + 0xb8) + 8);
  if (lVar7 != 0) {
    lVar6 = *(long *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x10);
    *(undefined4 *)(lVar7 + 0x34) = 1;
    if (lVar6 != 0) {
      *(undefined4 *)(lVar6 + 0x34) = 1;
      System_Runtime_Remoting_RemotingServices__RegisterInternalChannels();
      uVar2 = DAT_09172a10;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Type__GetTypeFromHandle(uVar2,0);
      System_Runtime_Remoting_RemotingServices__CreateWellKnownServerIdentity(uVar2,DAT_0920b9f8,1);
      lVar7 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
      if (lVar7 != 0) {
        uVar2 = System_Type__GetMethod(lVar7,DAT_09202950,0x24,0);
        puVar3 = (undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x30);
        *puVar3 = uVar2;
        thunk_FUN_03f5d7b8(puVar3,uVar2);
        lVar7 = System_Type__GetTypeFromHandle(DAT_095353e8 + 0x20,0);
        if (lVar7 != 0) {
          uVar2 = System_Type__GetMethod(lVar7,DAT_09202930,0x24,0);
          puVar3 = (undefined8 *)(*(long *)(DAT_09189ed8 + 0xb8) + 0x38);
          *puVar3 = uVar2;
          thunk_FUN_03f5d7b8(puVar3,uVar2);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

